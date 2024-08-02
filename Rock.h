#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock : public Move {

    public:
    Rock();
    std::string getName();
    std::unordered_set<std::string> beats = {"Scissors"};
};
#endif