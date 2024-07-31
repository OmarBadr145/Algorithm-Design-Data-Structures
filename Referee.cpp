#include "Referee.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player * Referee :: refGame(Player * player1, Player * player2){
    char p1Move = player1->makeMove();
    char p2Move = player2->makeMove();
    Player * winner = nullptr;
    
    /// all draws possible
    if (p1Move == 'R' && p2Move == 'R'){
        return nullptr;
    };

    if (p1Move == 'P' && p2Move == 'P'){
        return nullptr;
    };

    if (p1Move == 'S' && p2Move == 'S'){
        return nullptr;
    };

    /// all p1 wins
    if (p1Move == 'R' && p2Move == 'S'){
        winner = player1;
    };

    if (p1Move == 'P' && p2Move == 'R'){
        winner = player1;
    };

    if (p1Move == 'S' && p2Move == 'P'){
        winner = player1;
    };

    /// all p2 wins
    if (p1Move == 'R' && p2Move == 'P'){
        winner = player2;
    };

    if (p1Move == 'S' && p2Move == 'R'){
        winner = player2;
    };
    if (p1Move == 'P' && p2Move == 'S'){
        winner = player2;
    };
    return winner;

};
