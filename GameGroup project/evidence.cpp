#include "evidence.h"
#include <iostream>


string evidence::getName() const {
    return name;
}

string evidence::getDescription() const {
    return description;
}

void evidence::setName(string n) {
    name = n;
}

void evidence::setDescription(string d) {
    description = d;
}

string evidence::operator + (const evidence &right) {
    evidence temp;
    temp.name = name + right.name;
    return temp.name;
}
