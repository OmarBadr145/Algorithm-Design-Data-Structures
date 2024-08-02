#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move{
    public:
    Scissors(); 
    std::unordered_set<std::string> getBeats();
    std::string getName();

};
#endif