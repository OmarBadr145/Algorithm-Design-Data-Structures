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
    char HumanMove;
    cout << "Please input your move, r for Rock, p for Paper, and S for Scissors " << endl;
    cin >> HumanMove;
    return HumanMove;
};

string Human :: getName(){
    return HumanName;
};

