#include "Referee.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player * refGame(Player * player1, Player * player2){
    char p1Move = player1->makeMove();
    char p2Move = player2->makeMove();
    
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
        cout << player1->getName() << "Wins!";
    };

    if (p1Move == 'p' && p2Move == 'r'){
        cout << player1->getName() << "Wins!";
    };

    if (p1Move == 's' && p2Move == 'p'){
        cout << player1->getName() << "Wins!";
    };

    /// all p2 wins
    if (p1Move == 'r' && p2Move == 'p'){
        cout << player2->getName() << "Wins!";
    };

    if (p1Move == 's' && p2Move == 'r'){
        cout << player2->getName() << "Wins!";
    };
    if (p1Move == 'p' && p2Move == 's'){
        cout << player2->getName() << "Wins!";
    };

};
