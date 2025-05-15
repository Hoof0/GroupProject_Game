
#include "Story.h"
#include <iostream>
#include "Choices.h"
#include <limits>
#include <cctype>


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

void Story::setChoiceses(const string description, Story* nextStory, bool isFunction)
{
	Choices newChoice(description, nextStory);
	newChoice.setIsFunction(isFunction);
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
	int playerChoice = 0;
	bool validInput = false;

	while (validInput == false) {
		cout << "Enter your choice: ";
		cin >> playerChoice;
		
			// for case choiceses = 1 fail 
			if (isdigit(playerChoice) && Choiceses.size() == 1 && playerChoice == 1) {
				validInput = true;
				cout << "You selected option " << playerChoice << endl;

			} 

			else if (isdigit(playerChoice) && playerChoice >= 1 && playerChoice <= Choiceses.size()) {
				validInput = true;
				cout << "You selected option " << playerChoice << endl;
			} else {
				cout << "Invalid choice. Please choose between 1 and " << Choiceses.size() << "." << endl;
			}
		}

	Choices selectedChoice = Choiceses[playerChoice - 1];

	if (selectedChoice.getIsFunction()) {

		compareEvidence(inventory, result);

		return *this;
	}

	// Return the next story based on the choice
	return *Choiceses[playerChoice - 1].getNextStory();
}

void Story::compareEvidence(const vector<evidence*>& inventory, int& result){

	cout << "The evidence you have collected so far: " << endl;
	for (size_t i=0; i <inventory.size(); i++){
		if(inventory[i]->getHasFound() == true){
			for (size_t i = 0; i < inventory.size(); i++) {
				cout << i + 1 << ". " << inventory[i]->getName() << endl;
			}
		}
	}

	int firstChoice = 0;
	bool validFirstChoice = false;
	while (validFirstChoice == false) {
		cout << "Select the first evidence to compare: ";
		cin >> firstChoice;

		if (firstChoice >= 1 && firstChoice <= inventory.size() && inventory[firstChoice - 1]->getHasFound() == true) {
			validFirstChoice = true;
		}
		else {
			cout << "Invalid choice. Please choose between 1 and " << inventory.size() << "." << endl;
		}
	}
	int secondChoice = 0;
	bool validSecondChoice = false;
	while (validSecondChoice == false) {
		cout << "Select your second evidence to compare: ";
		cin >> secondChoice;
		if (secondChoice >= 1 && secondChoice <= inventory.size() && inventory[secondChoice - 1]->getHasFound() == true) {
			validSecondChoice = true;
		}
		else if (firstChoice == secondChoice) {
			cout << "You can't select the same evidence. Please choose a different one." << endl;
		}
		else {
			cout << "Invalid choice. Please choose between 1 and " << inventory.size() << "." << endl;
		}
	}

	evidence* firstEvidence = inventory[firstChoice - 1];
	evidence* secondEvidence = inventory[secondChoice - 1];

	if (*firstEvidence == *secondEvidence) {
		result = firstEvidence->getIDnumber();
		cout << "You have found the connection between the evidence." << endl;
	
	}
	else {
		cout << "There is no connection between them." << endl;
	}

	cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}