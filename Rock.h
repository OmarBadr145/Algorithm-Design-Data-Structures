#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock : public Move {
    public:
    Rock();
    std::unordered_set<std::string> getBeats();
    std::string getName();
};
#endif