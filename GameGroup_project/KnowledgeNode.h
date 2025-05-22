#include "StoryElement.h"
#include <vector>

using namespace std;

class dialogueOption;

class KnowledgeNode:public StoryElement{
private:
    string description;
    int IDnumber;
    bool isUnlocked;
    vector<dialogueOption> unlockedOption;
public:
    KnowledgeNode(int nodeID = -1, string dsc = "") : IDnumber(nodeID), description(dsc), isUnlocked(false) {}
    int getIDnumber() const;
    bool getIsUnlocked() const;
    void setIDnumber(int id);
    string getDescription() const;
    void setDescription(string dsc);
    void setIsUnlocked(bool unlocked);
    void setDialogueOption(const dialogueOption& option){
        return unlockedOption.push_back(option);
    };
    const vector<dialogueOption>& getDialogueOptions() const {
        return unlockedOption;
    };
};
