#include <iostream>
#include <string>
#include <vector>
#include <limits>  // For numeric_limits
#include "StoryElement.h"
#include "Story.h"
#include "Choices.h"
#include "evidence.h"

using namespace std;

void clearScreen() {
    system("clear"); // or "cls" for Windows
}

int main() {
    vector<evidence*> inventory;
    int evidenceConnectionResult = -1; // Default to -1 (no connection found)

    // Create evidence objects
    evidence* body = new evidence();
    body->setDescription("The victim died from blunt force trauma to the back of the head. The victim has small bruises on the knees and a large bruise on the back of the head. The victim's died at roughly 10:00 PM.");
    body->setName("Body");
    body->setIDnumber(0);
    body->setHasFound(true);  // Make this evidence initially found
    inventory.push_back(body);

    evidence* book = new evidence();
    book->setDescription("The book is found fallen off the shelf. The book is a big dictionary. The book have blood found on one of the conner of the book cover. That conner is slightly torn.");
    book->setName("Dictionary");
    book->setIDnumber(0);     // Same ID as body so they match
    book->setHasFound(true);  // Make this evidence initially found
    inventory.push_back(book);

    evidence* murderWeapon = new evidence();
    murderWeapon->setDescription("You have come to the conclusion that the dictionary is most likely the murder weapon.");
    murderWeapon->setName("Murder Weapon");
    murderWeapon->setIDnumber(1);
    murderWeapon->setHasFound(false);  // Not found initially
    
    // Create all your story scenes
    Story* mainEnding = new Story("The End", vector<Choices>(), true);
    Story* introScene = new Story("You arrive at the crime scene. The police have checked out the area and did the autopsy. You are the main detective on this case. You have to find out what happend and who the killer is.", vector<Choices>());
    Story* autopsyReport = new Story("You ask one of the officer on site for the autopsy report: " + body->getDescription(), vector<Choices>());
    Story* evidenceScene = new Story("It is currently 11:45PM. You found yourself in the victim room where the victim found dead on the floor next to the bookshelf.", vector<Choices>());
    Story* connection = new Story("Find the connection between the evidence:", vector<Choices>());
    Story* conclusionScene = new Story("With the evidence collected, you can now solve the case.", vector<Choices>());
    
    // Set up the connections between scenes
    introScene->setChoiceses("Ask for autopsy report", autopsyReport);
    introScene->setChoiceses("Examine the crime scene", evidenceScene);
    
    autopsyReport->setChoiceses("Go back to the crime scene", evidenceScene);
    
    evidenceScene->setChoiceses("Try to establish connections between evidence", connection, true); // Function choice
    evidenceScene->setChoiceses("Go back to the investigation start", introScene);
    
    connection->setChoiceses("Return to crime scene", evidenceScene);
    
    // Main game loop
    Story currentStory = *introScene;

    while (!currentStory.getEnding()) {
        clearScreen();  // Clear screen for better readability
        
        // Display the current story
        cout << currentStory.getDescription() << endl << endl;
        
        // Handle special case after evidence connection is found
        if (evidenceConnectionResult == 0) {  // ID number 0 corresponds to dictionary and body
            // Add the murder weapon to inventory if not already there
            if (!murderWeapon->getHasFound()) {
                murderWeapon->setHasFound(true);
                inventory.push_back(murderWeapon);
                
                cout << "\nYou have found a critical connection: " << murderWeapon->getDescription() << endl;
                cout << "The murder weapon has been added to your evidence list.\n" << endl;
                
                // Reset the result so we don't keep showing this message
                evidenceConnectionResult = -1;
                
                // Optional: Move to conclusion scene after finding key evidence
                if (currentStory.getDescription() == connection->getDescription()) {
                    currentStory = *conclusionScene;
                    continue;  // Skip to the next iteration to display new story
                }
            }
        }
        
        // Show collected evidence if needed
        if (currentStory.getDescription().find("evidence") != string::npos) {
            cout << "\nCollected Evidence:" << endl;
            for (size_t i = 0; i < inventory.size(); i++) {
                if (inventory[i]->getHasFound()) {
                    cout << "- " << inventory[i]->getName() << endl;
                }
            }
            cout << endl;
        }
        
        // Display choices and get player input
        currentStory.display(currentStory.getDescription(), currentStory.getChoiceses());
        
        // Get player's choice and move to next story
        currentStory = currentStory.GetKeyPress(inventory, evidenceConnectionResult);
    }

    // Display ending
    cout << currentStory.getDescription() << endl;
    cout << "\nThanks for playing!" << endl;

    // Clean up memory
    delete mainEnding;
    delete introScene;
    delete autopsyReport;
    delete evidenceScene;
    delete connection;
    delete conclusionScene;
    
    for (auto evidence : inventory) {
        delete evidence;
    }
    
    return 0;
}