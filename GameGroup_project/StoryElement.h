#pragma once
#include<string>
using namespace std;

class StoryElement {
private:   
    string description;
public:
    StoryElement(string dsc = ""){
        description = dsc;
    }
    string getDescription() const;
    void setDescription(string dsc);
};