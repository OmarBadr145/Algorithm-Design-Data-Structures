#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Referee{
public:
    Player * refGame(Player * player1, Player * player2);

};
#endif