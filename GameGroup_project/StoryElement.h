#pragma once
#include<string>
#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

class StoryElement {
private:   
    std::string description;
public:
    StoryElement(string dsc = ""){
        description = dsc;
    }
    string getDescription() const;
    void printDescription() const;
    void setDescription(string dsc);
};