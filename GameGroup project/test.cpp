#include <iostream>
#include "evidence.h"
#include <string>
using namespace std;

int main() {
    evidence e1("Key", "A small key that opens a door.");
    evidence e2("Note", "A note with a clue.");
    evidence e3("GAY");
    string a = e1.getName();
    string b = e2.getName();
    string result;
    cin >> a;
    cin >> b;
    if (a == e1.getName() && b == e2.getName()) {
        cout << "You found a connection" << endl;
        result = e3.getName();
    }

    cout << result << endl;
    return 0;
}