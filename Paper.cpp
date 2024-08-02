#include "Paper.h"
#include "Move.h"



Paper::Paper()
{
}

std::unordered_set<std::string> Paper:: getBeats(){
    return {"Rock"};
}


std::string Paper::getName()
{
    std::string moveName = "Paper";
    return moveName;
};
