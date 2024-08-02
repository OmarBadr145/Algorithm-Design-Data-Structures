#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja : public Move{
    public:
    Ninja();
    std::unordered_set<std::string> getBeats();
    std::string getName();


};
#endif