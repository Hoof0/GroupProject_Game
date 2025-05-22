#include <string>
#include "StoryElement.h"
#include <vector>
#include <map>
#include "Story.h"
#include "dialogueOption.h"

using namespace std;

class KnowledgeNode;
class dialogueOption;


class NPC:public StoryElement
{
private:
    string name;
    string description;
    map<int, string> dialogueMap;
public:
    NPC() = default;

    string getName() const;
    string getDescription() const;
    map<int, string> getDialogueMap() const;

    void talk() const;
    void setDescription(const string& dsc);
    void addDefaultOption(const string& text, int connectionID);
    void setName(const string &NPCname);
    void setSuspect(bool suspect);
    void addDialogue(const string &dialogue);
};