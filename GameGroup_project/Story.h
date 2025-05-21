#pragma once
#include <string>
#include <vector>
#include "evidence.h"
#include "StoryElement.h"
#include <cctype>
#include <cstdlib>
using namespace std;

class Choices;
class evidence;

class Story:public StoryElement
{
private:
	vector<Choices> Choiceses;
	bool ending;
public:
	Story(string text, vector<Choices> ch, bool end = false) : StoryElement(text), ending(end) { };
	Story() = default;
	bool getEnding() const;
	void setEnding(bool end);
	void setChoiceses(const string description, Story* nextStory, int typeFunction);
	// game function
	void interrogate(const vector<evidence*>& inventory);
	void compareEvidence(const vector<evidence*>& inventory, int& result);
    void printInventory(const vector<evidence*>& inventory);	
	Story GetKeyPress(vector<evidence*>& inventory, int& result);
	const vector<Choices>& getChoiceses() const;
	void display(string nar, vector<Choices> ch);
};

