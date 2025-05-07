#include <iostream>
#include <string>
#include <vector>
#include "StoryElement.h"
#include "Story.h"
#include "Choices.h"
#include "evidence.h"

using namespace std;

void clearScreen() {
    system("clear");
}

int main() {
    vector<evidence*> inventory;

    string collectedEvidence;

    for(size_t i = 0; i < inventory.size(); i++){
        collectedEvidence += inventory[i]->getName() + "\n";
    }

    evidence* body = new evidence();
    body->setDescription("The victim died from blunt force trauma to the back of the head. The victim has small bruises on the knees and a large bruise on the back of the head. The victim's died at roughly 10:00 PM.");
    body->setName("Body");
    body->setIDnumber(0);
    body->setHasFound(false);

    evidence* book = new evidence();
    book->setDescription("The book is found fallen off the shelf. The book is a big dictionary. The book have blood found on one of the conner of the book cover. That conner is slightly torn.");
    book->setName("Dictionary");
    book->setIDnumber(0);
    book->setHasFound(false);

    evidence* murderWeapon = new evidence();
    murderWeapon->setDescription("You have come to the conclusion that the dictionary is most likely the murder weapon.");
    murderWeapon->setName(book->getName());
    murderWeapon->setIDnumber(1);

    Story* mainEnding = new Story();
    Story* introScene = new Story();
    Story* autopsyReport = new Story();
    Story* evidenceScene = new Story();
    Story* connection = new Story();
    

    introScene->setDescription("You arrive at the crime scene. The police have checked out the area and did the autopsy. You are the main detective on this case. You have to find out what happend and who the killer is.");
 
    autopsyReport->setDescription("You ask one of the officer on site for the autopsy report: " + body->getDescription());
 
    evidenceScene->setDescription("It is currently 11:45PM. You found yourself in the victim room where the victim found dead on the floor next to the bookshelf.");



    // The function for evidence connection
    connection->setDescription("Find the connection between the evidence:");
    /* This shit need help might need to fix the evidence.h file new problem found congrats
    connection->setChoiceses("1" + body->getDescription(), ); 
    */
}