#include "Zombie.h"
#include "Move.h"

Zombie::Zombie()
{
}

std::unordered_set<std::string> Zombie:: getBeats(){
    return {"Pirate","Monkey"};
}


std::string Zombie::getName()
{
    std::string moveName = "Zombie";
    return moveName;
};
