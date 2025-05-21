#include "dialogueOption.h"
#include <iostream>

using namespace std;

string dialogueOption::getText() const {
    return text;
}

void dialogueOption::setText(string t) {
    text = t;
}

int dialogueOption::getConnectionID() const {
    return ConnectionID;
}

void dialogueOption::setResponse(const DialogueResponse& resp) {
    response = resp;
}