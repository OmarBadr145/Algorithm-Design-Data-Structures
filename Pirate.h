#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate : public Move{
    public:
    Pirate();
    std::unordered_set<std::string> getBeats();
    std::string getName();


};
#endif