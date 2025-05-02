#include "Choices.h"


Story* Choices::getNextStory() const {
	return nextStory;
}

Choices::Choices(const string dsc, Story* next):StoryElement(dsc), nextStory(next) {
	nextStory = next;
}