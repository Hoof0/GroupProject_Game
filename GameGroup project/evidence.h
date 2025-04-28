#pragma once
#include <string>
using namespace std;
class evidence {
private:
    string name;
    string description;
public:
    evidence(string n = "", string d = ""){
        name = n;
        description = d;
    }
    string getName() const;
    string getDescription() const;
    void setName(string n);
    void setDescription(string d);
    void operator + (const evidence &right);
};