#ifndef MOVE_H
#define MOVE_H
#include <unordered_set>
#include <string>

class Move{
    public:
    Move(); 
    std::unordered_set<std::string> beats;
    virtual std :: string getName() = 0;
    
};
#endif