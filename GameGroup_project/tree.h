#pragma once
#include<vector>
using namespace std;

class Story;

class tree {
private:
    vector<Story*> allStory;
public:
    Story* createStory();
};
