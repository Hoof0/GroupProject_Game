#include <iostream>
#include <string>
#include <vector>
#include "Story.h"
#include "Choices.h"
#include "evidence.h"
#include "StoryElement.h"

using namespace std;

// Cross-platform function to clear screen
void clearScreen() {
    system("clear");
}


int main() {
    // Create evidence items that might be discovered throughout the story
    evidence* knife = new evidence();
    knife->setName("Bloody Knife");
    knife->setIDnumber(1);
    knife->setDescription("A knife with traces of blood on it");

    evidence* letter = new evidence();
    letter->setName("Mysterious Letter");
    letter->setIDnumber(2);
    letter->setDescription("A letter with strange symbols");
    
    
    evidence* photo = new evidence();
    photo->setName("Family Photo");
    photo->setIDnumber(3);
    photo->setDescription("A torn family photo with one face scratched out");
    
    // Create story nodes
    Story* introScene = new Story();
    Story* forestScene = new Story();
    Story* cabinScene = new Story();
    Story* riverScene = new Story();
    Story* caveScene = new Story();
    Story* endingGood = new Story();
    Story* endingBad = new Story();
    
    // Set up the intro scene
    introScene->setDescription("You wake up in a clearing, with no memory of how you got here. The forest surrounds you on all sides.");
    
    // Set up forest scene
    forestScene->setDescription("You venture deeper into the forest. The trees grow thicker, blocking out most of the sunlight.");
    
    // Set up cabin scene
    cabinScene->setDescription("You discover an old, abandoned cabin. The door creaks as you push it open. Inside, you find " + 
                              knife->getName() + ". " + knife->getDescription());
    
    // Set up river scene
    riverScene->setDescription("You follow a small stream to a wide river. Something shiny catches your eye in the water. You reach in and find " + 
                              letter->getName() + ". " + letter->getDescription());
    
    // Set up cave scene
    caveScene->setDescription("The dark cave entrance looms before you. Inside, using your flashlight, you discover " + 
                             photo->getName() + ". " + photo->getDescription());
    
    // Set up endings
    endingGood->setDescription("Using the evidence you collected, you piece together what happened and find your way home. Congratulations!");
    endingGood->setEnding(true);
    
    endingBad->setDescription("Night falls and you're still lost in the forest. The strange noises growing closer...");
    endingBad->setEnding(true);
    
    // Connect the stories with choices
    introScene->setChoiceses("Head into the forest", forestScene);
    introScene->setChoiceses("Follow the sound of water", riverScene);
    
    forestScene->setChoiceses("Investigate the cabin you see in the distance", cabinScene);
    forestScene->setChoiceses("Look for a path out of the forest", endingBad);
    
    cabinScene->setChoiceses("Take the knife and head back outside", forestScene);
    cabinScene->setChoiceses("Search the cabin thoroughly", caveScene);
    
    riverScene->setChoiceses("Read the mysterious letter", endingGood);
    riverScene->setChoiceses("Head towards the mountains", caveScene);
    
    caveScene->setChoiceses("Examine the family photo closely", endingGood);
    caveScene->setChoiceses("Leave the cave quickly", endingBad);
    
    // Start the adventure
    Story currentStory = *introScene;
    vector<evidence*> collectedEvidence;
    
    while (!currentStory.getEnding()) {
        clearScreen();
        cout << currentStory.getDescription() << endl << endl;
        
        // Display current evidence
        if (!collectedEvidence.empty()) {
            cout << "--- Your Evidence ---" << endl;
            for (size_t i = 0; i < collectedEvidence.size(); i++) {
                cout << "- " << collectedEvidence[i]->getName() << endl;
            }
            cout << "--------------------" << endl << endl;
        }
        
        // Handle special cases for scenes that give evidence
        if (&currentStory == cabinScene) {
            collectedEvidence.push_back(knife);
            cout << "You added " << knife->getName() << " to your evidence." << endl;
        } else if (&currentStory == riverScene) {
            collectedEvidence.push_back(letter);
            cout << "You added " << letter->getName() << " to your evidence." << endl;
        } else if (&currentStory == caveScene) {
            collectedEvidence.push_back(photo);
            cout << "You added " << photo->getName() << " to your evidence." << endl;
        }
        
        // Display choices
        currentStory.display(currentStory.getDescription(), currentStory.getChoiceses());
        
        // Get user choice and move to next story
        currentStory = currentStory.GetKeyPress();
        
        // Test evidence comparison
        if (collectedEvidence.size() >= 2) {
            if (*collectedEvidence[0] == *collectedEvidence[0]) {
                cout << "Evidence comparison test: Same evidence object comparison works correctly" << endl;
            }
            if (!(*collectedEvidence[0] == *collectedEvidence[1])) {
                cout << "Evidence comparison test: Different evidence objects are correctly identified as different" << endl;
            }
        }
    }
    
    // Display the ending
    clearScreen();
    cout << currentStory.getDescription() << endl;
    cout << "\n--- THE END ---\n" << endl;
    
    // Clean up allocated memory
    delete knife;
    delete letter;
    delete photo;
    delete introScene;
    delete forestScene;
    delete cabinScene;
    delete riverScene;
    delete caveScene;
    delete endingGood;
    delete endingBad;
    
    cout << "Press Enter to exit..." << endl;
    cin.ignore();
    cin.get();
    
    return 0;
}