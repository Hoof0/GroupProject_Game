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
        std::string description;
        std::cout << c << std::flush;
        this_thread::sleep_for(chrono::milliseconds(45));
    }
    std::cout << std::endl;
};