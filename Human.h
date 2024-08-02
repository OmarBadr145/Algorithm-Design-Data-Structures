#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Move.h"
#include "MoveFactory.h"
#include <iostream>
#include <string>

class Human : public Player{

public: 
    Human();
    Human (std :: string);
    Move * makeMove();
    std :: string getName();
private:
    std :: string HumanName = "Human";
    std :: string moveName;


};



#endif