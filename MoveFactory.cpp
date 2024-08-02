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
    if (moveName == "Rock")
    {
        return (new Rock());
    }
    else if (moveName == "Paper")
    {
        return (new Paper());
    }
    else if (moveName == "Scissors")
    {
        return (new Scissors());
    }
    else if (moveName == "Monkey")
    {
        return (new Monkey());
    }
    else if (moveName == "Robot")
    {
        return (new Robot());
    }
    else if (moveName == "Pirate")
    {
        return (new Pirate());
    }
    else if (moveName == "Ninja")
    {
        return (new Ninja());
    }
    else if (moveName == "Zombie")
    {
        return (new Zombie());
    }
    return nullptr;
};