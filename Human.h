#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>
#include <string>

class Human : public Player{

public: 
    Human (string);
    char makeMove();
    string getName();
private:
    string HumanName = "Human";
    char HumanMove;


};



#endif