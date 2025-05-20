#pragma once
#include <string>
#include "StoryElement.h"
using namespace std;

class Story;

class Choices:public StoryElement
{
private:
	Story* nextStory;
	int typeFunction;
public:
	Choices(const string dsc, Story* next) : StoryElement(dsc), nextStory(next) { };
	Choices() = default;
	Story* getNextStory() const;
	int getTypeFunction() const;	
	void setTypeFunction(int type);
};

