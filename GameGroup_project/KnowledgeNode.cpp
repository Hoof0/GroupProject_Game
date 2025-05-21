#include "KnowledgeNode.h"

int KnowledgeNode::getIDnumber() const {
    return IDnumber;
}

string KnowledgeNode::getDescription() const {
    return description;
}

bool KnowledgeNode::getIsUnlocked() const {
    return isUnlocked;
}

void KnowledgeNode::setIsUnlocked(bool unlocked) {
    isUnlocked = unlocked;
}

void KnowledgeNode::setIDnumber(int id) {
    IDnumber = id;
}

void KnowledgeNode::setDescription(string dsc) {
    description = dsc;
}

