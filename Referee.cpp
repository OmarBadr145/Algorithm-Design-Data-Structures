#include "Referee.h"
#include "Player.h"
#include "MoveFactory.h"
#include <iostream>
#include <string>


Player * Referee :: refGame(Player * player1, Player * player2){
    Move* p1Move = player1->makeMove();   ///Returns an object of the move 
    Move* p2Move = player2->makeMove();
    Player * winner = nullptr;
    
    ///// Has to look up using find instead
    ///Logic to ref the game
    //1st check for tie
    if (p1Move->getName() == p2Move->getName()){
        winner = nullptr;
    };
    if (p1Move->beats.find(p2Move->getName()) != p1Move->beats.end()){
        winner = player1;
    }
    else if (p1Move->beats.find(p2Move->getName()) == p1Move->beats.end()){
        winner = player2;
    }

    return winner;

};