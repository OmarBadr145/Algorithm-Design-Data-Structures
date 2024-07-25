#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Computer : public Player {

public: 
    char makeMove();
    string getName();

};
#endif
