#include "NPC.h"

string NPC::getName() const
{
    return name;
}
    bool NPC::getIsSuspect() const{
        return isSuspect;
    }
    vector<string> NPC::getDialogues() const
    {
        return dialogues;
    }
    string NPC::getDialogue(int index) const
    {
        if (index >= 0 && index < static_cast<int>(dialogues.size())) {
        return dialogues[index];
    }
    return "No dialogues available.";
}

    void NPC::setName(const string &NPCname)
    {
        name = NPCname;
    }
    void NPC::setSuspect(bool suspect)
    {
        isSuspect = suspect;
    }
    void NPC::addDialogue(const string &dialogue)
    {
        dialogues.push_back(dialogue);
    }