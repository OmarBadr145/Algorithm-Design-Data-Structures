#include "Player.h"
#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

Human :: Human(){
    cout <<"Please input your name"<< endl;
    cin >> HumanName;
}

char Human :: makeMove(){
    cin >> HumanMove;
    return HumanMove;
};

string Human :: getName(){
    return HumanName;
};

