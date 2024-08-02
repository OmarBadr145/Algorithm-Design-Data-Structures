#include "Ninja.h"
#include "Move.h"

Ninja::Ninja()
{
}

std::unordered_set<std::string> Ninja:: getBeats(){
    return {"Pirate","Zombie"};
}


std::string Ninja::getName()
{
    std::string moveName = "Ninja";
    return moveName;
};
