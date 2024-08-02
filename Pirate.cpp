#include "Pirate.h"
#include "Move.h"

Pirate::Pirate()
{
}

std::unordered_set<std::string> Pirate:: getBeats(){
    return {"Robot","Monkey"};
}


std::string Pirate::getName()
{
    std::string moveName = "Pirate";
    return moveName;
};
