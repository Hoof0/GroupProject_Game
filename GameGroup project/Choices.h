#pragma once
#include <string>
#include "Story.h"
using namespace std;

class Choices
{
private:
	string Description;
	Story* NextPart;
public:
	Choices(const string dsc, Story* NxtPrt) {
	};
	string getDescription() const;
	Story* getNextPart() const;
	void setDescription(string dsc);
	void setNextPart(Story* NxtPrt);
};

