#include "Referee.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player * refGame(Player * player1, Player * player2){
    char p1Move = player1->makeMove();
    char p2Move = player2->makeMove();
    Player * winner = nullptr;
    
    /// all draws possible
    if (p1Move == 'r' && p2Move == 'r'){
        return nullptr;
    };

    if (p1Move == 'p' && p2Move == 'p'){
        return nullptr;
    };

    if (p1Move == 's' && p2Move == 's'){
        return nullptr;
    };

    /// all p1 wins
    if (p1Move == 'r' && p2Move == 's'){
        winner = player1;
    };

    if (p1Move == 'p' && p2Move == 'r'){
        winner = player1;
    };

    if (p1Move == 's' && p2Move == 'p'){
        winner = player1;
    };

    /// all p2 wins
    if (p1Move == 'r' && p2Move == 'p'){
        winner = player2;
    };

    if (p1Move == 's' && p2Move == 'r'){
        winner = player2;
    };
    if (p1Move == 'p' && p2Move == 's'){
        winner = player2;
    };
    return winner;

};
