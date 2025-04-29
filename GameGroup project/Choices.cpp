#include "Choices.h"


void Choices::setDescription(string dsc)
{
	Description = dsc;
}

void Choices::setNextPart(Story* NxtPrt)
{
	NextPart = NxtPrt;
}

string Choices::getDescription() const {
	return Description;
}

Story* Choices::getNextPart() const {
	return NextPart;
}