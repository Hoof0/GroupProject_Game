#include "StoryElement.h"



string StoryElement::getDescription() const{
    return description;
};

void StoryElement::setDescription(string dsc){
    description = dsc;
};

void StoryElement::printDescription() const{
    // Print text slowly
    for (char c : description){
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << endl;
};