#include "Player.h"
#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

Human :: Human(string name){
    this->HumanName = name;
}

char Human :: makeMove(){
    cin >> HumanMove;
    return HumanMove;
};

string Human :: getName(){
    return HumanName;
};

