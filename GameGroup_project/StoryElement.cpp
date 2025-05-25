#include "StoryElement.h"



string StoryElement::getDescription() const{
    return description;
};

void StoryElement::setDescription(string dsc){
    description = dsc;
};

void StoryElement::printDescription() const{
    const int LineLength = 80; // Set the line length for text wrapping
    string word = "";
    int currentLineLength = 0;

    // Print text slowly

    for (char c : description){
        std::string description;
        std::cout << c << std::flush;
        this_thread::sleep_for(chrono::milliseconds(1));
    }
    std::cout << std::endl;
};