#pragma once
#include <string>
#include "StoryElement.h"
#include <vector>
using namespace std;
class evidence:public StoryElement {
private:
    string name;
    int idNumber;
    vector<string> inventory;
    bool hasFound = false;
public:
    evidence() = default;
    bool getHasFound() const;
    string getName() const;
    int getIDnumber() const;
    vector<string> getInventory() const;
    void setHasFound(bool hf);
    void setInventory(vector<string> inv);
    void setName(string n);
    void setIDnumber(int ID);
    bool operator==(const evidence &right);
};