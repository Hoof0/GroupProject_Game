#include "DialogueResponse.h"
#include <iostream>

string DialogueResponse::getText() const {
    return text;
}

void DialogueResponse::setText(string t) {
    text = t;
}

const vector<int>& DialogueResponse::getUnlockKnowledgeID() const {
    return unlockKnowledgeID;
}
