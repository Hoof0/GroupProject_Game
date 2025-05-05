#include "Story.h"
#include <iostream>
#include "Choices.h"



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

void Story::setChoiceses(const string description, Story* nextStory)
{
	Choiceses.push_back(Choices(description, nextStory));
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


Story Story::GetKeyPress()
{
	int playerChoice = 0;
	bool validInput = false;

	while (validInput == false) {
		cout << "Enter your choice: ";
		cin >> playerChoice;

			// Check if the choice is valid
			if (playerChoice >= 1 && playerChoice <= static_cast<int>(Choiceses.size())) {
				validInput = true;
				cout << "You selected option " << playerChoice << endl;
			} else {
				cout << "Invalid choice. Please choose between 1 and " << Choiceses.size() << "." << endl;
			}
		}


	// Return the next story based on the choice
	return *Choiceses[playerChoice - 1].getNextStory();
}