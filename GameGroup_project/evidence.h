#pragma once
#include <string>
#include "StoryElement.h"
using namespace std;
class evidence:public StoryElement {
private:
    string name;
    int idNumber;
public:
    evidence() = default;
    string getName() const;
    int getIDnumber() const;
    void setName(string n);
    void setIDnumber(int ID);
};