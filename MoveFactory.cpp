#include "MoveFactory.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"


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
    return currentMove;
};