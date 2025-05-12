#include "Choices.h"


Story* Choices::getNextStory() const {
	return nextStory;
}

bool Choices::getIsFunction() const {
	return isFunction;
}

void Choices::setIsFunction(bool function) {
	isFunction = function;
}