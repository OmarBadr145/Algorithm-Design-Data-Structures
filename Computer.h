#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream>
#include <string>


class Computer : public Player {

public: 
    Move * makeMove();
    std::string getName();
private:
    std::string ComputerMove = "Rock";

};
#endif
