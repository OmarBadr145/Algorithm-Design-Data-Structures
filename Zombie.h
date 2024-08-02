#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"

class Zombie : public Move{
    public:
    Zombie();
    std::unordered_set<std::string> getBeats();
    std::string getName();


};
#endif