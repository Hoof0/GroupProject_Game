#pragma once
#include <string>
#include "StoryElement.h"
using namespace std;

class Story;

class Choices:public StoryElement
{
private:
	Story* nextStory;
public:
	Choices(const string dsc, Story* next);
	Story* getNextStory() const;	
};

