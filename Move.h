#ifndef MOVE_H
#define MOVE_H
#include <unordered_set>
#include <string>

class Move{
    public:
    virtual std::unordered_set<std::string> getBeats() = 0;
    virtual std :: string getName() = 0;    
};
#endif