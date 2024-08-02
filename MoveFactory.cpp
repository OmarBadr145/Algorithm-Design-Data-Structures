#include "MoveFactory.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Robot.h"
#include "Ninja.h"


// MoveFactory::MoveFactory()
// {
// }

Move *MoveFactory ::CreateMove(std::string moveName)
{
    Move* currentMove;
    if (moveName == "Rock")
    {
        currentMove = new Rock();
    }
    else if (moveName == "Paper")
    {
        currentMove = new Paper();
    }
    else if (moveName == "Scissors")
    {
        currentMove = new Scissors();
    }
    else if (moveName == "Monkey")
    {
        currentMove = new Monkey();
    }
    else if (moveName == "Robot")
    {
        currentMove = new Robot();
    }
    else if (moveName == "Pirate")
    {
        currentMove = new Pirate();
    }
    else if (moveName == "Ninja")
    {
        currentMove = new Ninja();
    }
    else if (moveName == "Zombie")
    {
        currentMove = new Zombie();
    }
    return currentMove;
};