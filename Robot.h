#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"

class Robot : public Move{
    public:
    Robot();
    std::unordered_set<std::string> getBeats();
    std::string getName();


};
#endif