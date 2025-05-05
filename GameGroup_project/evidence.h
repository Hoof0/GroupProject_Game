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
public:
    evidence() = default;
    string getName() const;
    int getIDnumber() const;
    vector<string> getInventory() const;
    void setInventory(vector<string> inv);
    void setName(string n);
    void setIDnumber(int ID);
    bool operator==(const evidence &right);
};