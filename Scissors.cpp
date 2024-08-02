#include "Move.h"
#include "Scissors.h"

Scissors::Scissors()
{
}

std::unordered_set<std::string> Scissors:: getBeats(){
    return {"Paper"};
}

std::string Scissors::getName()
{
    std::string moveName = "Scissors";
    return moveName;
};
    