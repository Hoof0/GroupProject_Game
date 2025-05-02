#include "Story.h"
#include <conio.h>
#include <iostream>
#include "Choices.h"


Story::Story(string text, vector<Choices> ch, bool end = false):StoryElement(text), ending(end){

}

bool Story::getEnding() const
{
	return ending;
}

void Story::setEnding(bool end)
{
	end = ending;
}

const vector<Choices>& Story::getChoiceses() const
{
	return Choiceses;
}

void Story::display(string nar, vector<Choices> ch)
{
	if (ending = true) {
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
	char KeyPress;
	int NumPress;
	bool Valid = false;
	int playerChoice = 0;


	while (Valid == false) {
		KeyPress = _getch();
		NumPress = KeyPress;

		if (NumPress >= 1 && NumPress <= Choiceses.size()) {
			Valid = true;
			playerChoice = NumPress;
			cout << NumPress << endl;
			break;
		}
		else {
			cout << "Invalid choice. Please choose between 1 and " << Choiceses.size() << "." << endl;
		}
	}

	return *Choiceses[playerChoice - 1].getNextStory();
}