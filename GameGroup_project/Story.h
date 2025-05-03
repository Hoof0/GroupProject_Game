#pragma once
#include <string>
#include <vector>
#include "StoryElement.h"
using namespace std;

class Choices;

class Story:public StoryElement
{
private:
	vector<Choices> Choiceses;
	bool ending;
public:
	Story(string text, vector<Choices> ch, bool end = false) : StoryElement(text), ending(end) { };
	Story() = default;
	void setNaration(string Nar);
	bool getEnding() const;
	void setEnding(bool end);
	void setChoiceses(const string description, Story* nextStory);
	Story GetKeyPress();
	const vector<Choices>& getChoiceses() const;
	void display(string nar, vector<Choices> ch);
};

