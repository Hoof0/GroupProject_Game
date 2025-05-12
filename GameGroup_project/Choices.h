#pragma once
#include <string>
#include "StoryElement.h"
using namespace std;

class Story;

class Choices:public StoryElement
{
private:
	Story* nextStory;
	bool isFunction = false;
public:
	Choices(const string dsc, Story* next) : StoryElement(dsc), nextStory(next) { };
	Choices() = default;
	Story* getNextStory() const;
	bool getIsFunction() const;	
	void setIsFunction(bool function);
};

