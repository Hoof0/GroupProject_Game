#include "Choices.h"


Story* Choices::getNextStory() const {
	return nextStory;
}

int Choices::getTypeFunction() const {
	return typeFunction;
}

void Choices::setTypeFunction(int type) {
	typeFunction = type;
}