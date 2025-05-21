#include <string>
#include "StoryElement.h"
#include <vector>
#include "evidence.h"
#include "Story.h"
using namespace std;

class DialogueResponse;

class dialogueOption:public StoryElement{
private:
    string text;
    int ConnectionID;
    DialogueResponse response;
public:
    dialogueOption() = default;
    string getText() const;
    void setText(string t);
    int getConnectionID() const;
    const DialogueResponse& getDialogueResponse() const{
        return response;
    };
    void setResponse(const DialogueResponse& resp);
};