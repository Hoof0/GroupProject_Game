#include "StoryElement.h"

int speed = 5;

string StoryElement::getDescription() const{
    return description;
};

void StoryElement::setDescription(string dsc){
    description = dsc;
};

void StoryElement::printDescription() const{
    const int width = 80; // Adjust this based on your terminal width
    string word = "";
    int currentLineLength = 0;
    
    for (size_t i = 0; i < description.length(); i++) {
        char c = description[i];
        
        if (c == ' ' ||  c == '\n' || i == description.length() - 1) {

            if (i == description.length() - 1 && c != ' ' && c != '\t' && c != '\n') {
                word += c;
            }
            
            
            if (currentLineLength + word.length() > width && currentLineLength > 0) {
                cout << endl; 
                currentLineLength = 0;
            }
            
          
            for (char wc : word) {
                cout << wc << flush;
                this_thread::sleep_for(chrono::milliseconds(speed));
                currentLineLength++;
            }
            
         
            if (c == '\n') {
                cout << c << flush;
                this_thread::sleep_for(chrono::milliseconds(speed));
                currentLineLength = 0;
            } else if (c == ' ' || c == '\t') {
               
                if (currentLineLength > 0) {
                    cout << c << flush;
                    this_thread::sleep_for(chrono::milliseconds(speed));
                    currentLineLength++;
                }
            }
            
            word = ""; 
        } else {
            word += c; 
        }
    // Print text slowly
    for (char c : description){
        std::string description;
        std::cout << c << std::flush;
        this_thread::sleep_for(chrono::milliseconds(5));
    }
    
    cout << endl;
};