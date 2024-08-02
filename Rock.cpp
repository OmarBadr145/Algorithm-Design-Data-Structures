#include "Rock.h"
#include "Move.h"

Rock::Rock()
{
}

std::unordered_set<std::string> Rock:: getBeats(){
    return {"Scissors"};    
}

std::string Rock::getName()
{
    std::string moveName = "Rock";
    return moveName;
};