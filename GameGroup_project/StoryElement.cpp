#include "StoryElement.h"



string StoryElement::getDescription() const{
    for (char c : description){
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    cout << endl;
    return description;
};

void StoryElement::setDescription(string dsc){
    description = dsc;
};

