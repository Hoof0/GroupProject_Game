#include "Story.h"
#include <conio.h>
#include <iostream>
#include "Choices.h"


void Story::setNaration(string Nar)
{
	Nar = Naration;
}

bool Story::getEnding() const
{
	return Ending;
}

void Story::setEnding(bool End)
{
	End = Ending;
}

const vector<Choices>& Story::getChoiceses() const
{
	return Choiceses;
}

void Story::display(string Nar, vector<Choices> choice)
{
	if (Ending = true) {
		cout << "--THE END--" << endl;
		return;
	}

	cout << "What will you do" << endl;
	for (size_t i = 0; i < choice.size(); i++) {
		cout << i + 1 << ". " << choice[i].getDescription() << endl;
	}
}


Story Story::GetKeyPress()
{
	char KeyPress;
	int NumPress;
	bool Valid = false;

	while (Valid = false) {
		KeyPress = _getch();
		NumPress = KeyPress;

		if (NumPress >= 1 && NumPress <= 3) {
			Valid = true;
			cout << NumPress << endl;
			
		}
	}
}

