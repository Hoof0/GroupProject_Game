#include <string>
#include <vector>
#include "NPC.h"

using namespace std;

class DialogueResponse:public StoryElement{
private:
    string text;
    vector<int> unlockKnowledgeID;
public:
    DialogueResponse() = default;
    string getText() const;
    void setText(string t);
    const vector<int>& getUnlockKnowledgeID() const;

};