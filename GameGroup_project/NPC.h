#include <string>
#include "StoryElement.h"
#include <vector>
#include "Story.h"
using namespace std;

class NPC:public StoryElement
{
    private:
    string name;
    bool isSuspect;
    vector<string> dialogues;
    public:

    NPC() = default;
    NPC(const string& desc, const string& NPCname, bool suspect = false, string dialogue):StoryElement(desc), name(NPCname), isSuspect(suspect) {};
    
    string getName() const;
    bool getIsSuspect() const;
    vector<string> getDialogues() const;
    string getDialogue(int index) const;

    void setName(const string &NPCname);
    void setSuspect(bool suspect);
    void addDialogue(const string &dialogue);
};