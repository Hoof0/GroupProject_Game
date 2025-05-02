#include <iostream>
#include "evidence.h"
#include <string>
using namespace std;

int main() {
    evidence* e1 = new evidence;
    evidence* e2 = new evidence;
    evidence* e3 = new evidence;
    e1->setName("Bob");
    e2->setName("Bob like men");
    string a = e1->getName();
    string b = e2->getName();
    string result = "Bob is gay";

    if (a == e1->getName() && b == e2->getName()) {
        cout << "You found a connection" << endl;
        cout << result;
    }
    delete e1;
    delete e2;
    delete e3;
    return 0;
}