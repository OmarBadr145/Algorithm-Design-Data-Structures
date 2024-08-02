#include "Robot.h"
#include "Move.h"

Robot::Robot()
{
}

std::unordered_set<std::string> Robot:: getBeats(){
    return {"Ninja","Zombie"};
}


std::string Robot::getName()
{
    std::string moveName = "Robot";
    return moveName;
};
