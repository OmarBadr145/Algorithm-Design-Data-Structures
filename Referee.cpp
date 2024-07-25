#include "Referee.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player * refGame(Player * player1, Player * player2){
    char p1Move = player1->makeMove();
    char p2Move = player2->makeMove();
    
    
    if (p1Move == 'r' && p1Move == 'r'){
        return nullptr;
    };
    ///have to do other options as well.
};
