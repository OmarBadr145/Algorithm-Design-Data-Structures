#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Robot.h"
#include "Ninja.h"
#include "Scissors.h"

class MoveFactory : public Move{
public:
// MoveFactory();
static Move * CreateMove(std:: string moveName);

};
#endif