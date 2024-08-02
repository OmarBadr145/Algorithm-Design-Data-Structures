#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move{
    public:
    Scissors(); 
    std::string getName();
    std::unordered_set<std::string> beats {"Paper"};

};
#endif