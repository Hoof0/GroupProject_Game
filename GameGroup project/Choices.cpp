#include "Choices.h"


void Choices::setDescription(string dsc)
{
	dsc = Description;
}

void Choices::setNextPart(Story* NxtPrt)
{
	NxtPrt = NextPart;
}

string Choices::getDescription() const {
	return Description;
}

Story* Choices::getNextPart() const {
	return NextPart;
}

