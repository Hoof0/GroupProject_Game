#include "evidence.h"
#include <iostream>


string evidence::getName() const{
    return name;
}

int evidence::getIDnumber() const{
    return idNumber;
}

bool evidence::getHasFound() const{
    return hasFound;
}


void evidence::setName(string n){
    name = n;
}

void evidence::setIDnumber(int ID){
    idNumber = ID;
}

void evidence::setHasFound(bool hf){
    hasFound = hf;
}

//btw I don't know if this work.
void evidence::setInventory(vector<string> inv){
    vector<string> temp;
    if(hasFound == true){
        temp.push_back(name);
    }
}


bool evidence::operator==(const evidence &right){
    bool result = false;
    if (idNumber == right.idNumber){
        result = true;
    }
    return result;
}
