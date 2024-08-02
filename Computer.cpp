#include "Player.h"
#include "Computer.h"
#include "MoveFactory.h"
#include <string>
#include <iostream>


Move * Computer::makeMove(){
    return MoveFactory::CreateMove(ComputerMove);
}

std :: string Computer :: getName(){
    std :: string ComputerName = "Computer";
    return ComputerName;
}