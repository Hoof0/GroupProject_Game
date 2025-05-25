
#include "Story.h"
#include <iostream>
#include "Choices.h"
#include <limits>
#include <sstream>
#include <cctype>
using namespace std;


bool Story::getEnding() const
{
	return ending;
}

void Story::setEnding(bool end)
{
	ending = end;
}

const vector<Choices>& Story::getChoiceses() const
{
	return Choiceses;
}

void Story::setChoiceses(const string description, Story* nextStory, int typeFunction)
{
	Choices newChoice(description, nextStory);
	newChoice.setTypeFunction(typeFunction);
	Choiceses.push_back(newChoice);
}

void Story::display(string nar, vector<Choices> ch)
{
	if (ending == true) {
		cout << "--THE END--" << endl;
		return;
	}

	cout << "What will you do" << endl;
	for (size_t i = 0; i < ch.size(); i++) {
		cout << i + 1 << ". " << ch[i].getDescription() << endl;
	}
}


Story Story::GetKeyPress(vector<evidence*>& inventory, int& result)
{
	string playerChoice = "0";
	bool validInput = false;

	while (validInput == false) {
		cout << "Enter your choice: ";
		getline(cin,playerChoice);
			//For single choice scenario
			
			if (stoi(playerChoice) >= 1 && stoi(playerChoice) <= Choiceses.size()) {
				validInput = true;
				cout << "You selected option " << playerChoice << endl;
			} else {
				cout << "Invalid choice. Please choose between 1 and " << Choiceses.size() << "; or press any non-number button to exit the game." << endl;
			}
		}

	Choices selectedChoice = Choiceses[stoi(playerChoice) - 1];

	if (selectedChoice.getTypeFunction() == 1) {

		compareEvidence(inventory, result);

		return *this;
	}

	else if (selectedChoice.getTypeFunction() == 2){
		printInventory(inventory);

		return *this;
	}
	

	

	// Return the next story based on the choice
	
	return *Choiceses[stoi(playerChoice) - 1].getNextStory();

}

void Story::compareEvidence(const vector<evidence*>& inventory, int& result){

	cout << "The evidence you have collected so far: " << endl;
	int displayCount = 0;
	vector<int> availableIndices; // Track actual indices of found evidence
	for (size_t i=0; i <inventory.size(); i++){
		if(inventory[i]->getHasFound() == true){
				cout << displayCount + 1 << ". " << inventory[i]->getName() << endl;
				availableIndices.push_back(i);
				displayCount++;
		}
	}


	if(displayCount < 2) {
		cout << "You need at least two pieces of evidence to compare." << endl;
		continuegame();
		return;
	}


	int firstChoice = 0;
	bool validFirstChoice = false;
	while (validFirstChoice == false) {
		cout << "Select the first evidence to compare: ";
		cin >> firstChoice;

		if (firstChoice >= 1 && firstChoice <= displayCount) {
			validFirstChoice = true;
		}
		else {
			cout << "Invalid choice. Please choose between 1 and " << inventory.size() << "; or press any non-number button to exit the game." << endl;
		}
	}
	int secondChoice = 0;
	bool validSecondChoice = false;
	while (validSecondChoice == false) {
		cout << "Select your second evidence to compare: ";
		cin >> secondChoice;
		if (secondChoice >= 1 && secondChoice <= displayCount && firstChoice != secondChoice) {
			validSecondChoice = true;
		}
		else if (firstChoice == secondChoice) {
			cout << "You can't select the same evidence. Please choose a different one." << endl;
		}
		else {
			cout << "Invalid choice. Please choose between 1 and " << inventory.size() << "; or press any non-number button to exit the game." << endl;
		}
	}

	evidence* firstEvidence = inventory[availableIndices[firstChoice - 1]];
	evidence* secondEvidence = inventory[availableIndices[secondChoice - 1]];

	if (*firstEvidence == *secondEvidence) {
		result = firstEvidence->getIDnumber();
		cout << "You have found the connection between the evidence." << endl;
		for (size_t i = 0; i < inventory.size(); i++) {
			if (inventory[i]->getIDnumber() == 10 && !inventory[i]->getHasFound()) {
				// This is the combined evidence (Mika's murder proof)
				inventory[i]->setHasFound(true);
				cout << "NEW EVIDENCE UNLOCKED: " << inventory[i]->getName() << endl;
				break; } }
	}
	else {
		cout << "There is no connection between them." << endl;
	}

	cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}


void Story::printInventory(const vector<evidence*>& inventory){
	
	cout << "The evidence you have collected so far: " << endl;
	for (size_t i = 0; i < inventory.size(); i++){
	int counter = 0;
    if(inventory[i]->getHasFound() == true){
		
        cout << counter + 1 << ". " << inventory[i]->getName() << endl;
		
    }
	counter++;
}

	cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void Story::interrogate(const vector<evidence*>& inventory){
	cout << "The evidence you have collected so far: " << endl;
	for (size_t i=0; i <inventory.size(); i++){
		if(inventory[i]->getHasFound() == true){
			for (size_t i = 0; i < inventory.size(); i++) {
				cout << i + 1 << ". " << inventory[i]->getName() << endl;
			}
		}
	}

	string Choice = "0";
	bool validFirstChoice = false;
	while (validFirstChoice == false) {
		cout << "Select the first evidence to compare: ";
		getline(cin,Choice);

		if (stoi(Choice) >= 1 && stoi(Choice) <= inventory.size() && inventory[stoi(Choice) - 1]->getHasFound() == true) {
			validFirstChoice = true;
		}
		else {
			cout << "Invalid choice. Please choose between 1 and " << inventory.size() << "; or press any non-number button to exit the game." << endl;
		}
	}

	evidence* tempEvi = inventory[stoi(Choice) - 1];

	
}


void Story::continuegame() {
	cout << "Press Enter to continue...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}

void Story::printOnLine(const string& text, size_t width) {
	stringstream words(text);

	string word;
	size_t lineLength = 0;

	while(words >> word) {

	}
}