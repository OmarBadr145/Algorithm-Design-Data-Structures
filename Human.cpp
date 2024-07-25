#include "Player.h"
#include "Human.h"
#include <stdio.h>
#include <string>

using namespace std;

char Human :: makeMove(){
    char HumanMove;
    cout << "Please input your move, r for Rock, p for Paper, and S for Scissors";
    cin >> HumanMove;
    return HumanMove;
};

string Human :: getName(){
    string HumanName = "Human";
    cout <<"Please input your name";
    cin >> HumanName;
    return HumanName;
};

