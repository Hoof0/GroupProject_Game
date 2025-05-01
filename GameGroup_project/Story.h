#pragma once
#include <string>
#include <vector>
using namespace std;

class Choices;

class Story
{
private:
	string Naration;
	vector<Choices> Choiceses;
	bool Ending = false;
public:
	Story() = default;
	void setNaration(string Nar);
	bool getEnding() const;
	void setEnding(bool End);
	Story GetKeyPress();
	const vector<Choices>& getChoiceses() const;
	void display(string Nar, vector<Choices> choice);
};

