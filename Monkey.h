#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move{
    public:
    Monkey();
    std::unordered_set<std::string> getBeats();
    std::string getName();


};
#endif