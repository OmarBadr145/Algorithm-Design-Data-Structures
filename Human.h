#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <stdio.h>
#include <string>

class Human : public Player{

public: 
    char makeMove();
    string getName();

};



#endif