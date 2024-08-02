#include "Monkey.h"
#include "Move.h"

Monkey::Monkey()
{
}

std::unordered_set<std::string> Monkey:: getBeats(){
    return {"Ninja","Robot"};
}


std::string Monkey::getName()
{
    std::string moveName = "Monkey";
    return moveName;
};
