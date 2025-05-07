#pragma once
#include <string>
#include "StoryElement.h"
#include <vector>
using namespace std;
class evidence:public StoryElement {
private:
    string name;
    int idNumber;
    bool hasFound = false;
public:
    evidence() = default;
    bool getHasFound() const;
    string getName() const;
    int getIDnumber() const;
    void setHasFound(bool hf);
    void setName(string n);
    void setIDnumber(int ID);
    bool operator==(const evidence &right);
};