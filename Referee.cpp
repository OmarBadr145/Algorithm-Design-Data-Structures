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
//     std::cout << p1Move->getName() << endl;
//     std::cout << p2Move->getName() << endl;
///debugging

    if (p1Move->getName() == p2Move->getName()){ ///checks if the name of the first object is the same as the second one for a tie
        winner = nullptr;
    }///      Paper                  Rock       
    else if (p1Move->getBeats().find(p2Move->getName()) != p1Move->getBeats().end()){
        winner = player1;
    }
    else {
        winner = player2;
    }
    return winner;

};