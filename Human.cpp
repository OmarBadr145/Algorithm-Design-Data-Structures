#include "Player.h"
#include "Human.h"
#include "MoveFactory.h"
#include <iostream>
#include <string>

Human :: Human(std :: string name){
    this->HumanName = name;
}

Move * Human::makeMove(){
    // MoveFactory * factory = new MoveFactory();
    std :: cin >> moveName;
    //use move factory to turn move name into the HumanMove as its a move*
    return MoveFactory::CreateMove(moveName);
};

std :: string Human :: getName(){
    return HumanName;
};

