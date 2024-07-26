#include "Human.h"
#include "Computer.h"
#include "Player.h"
#include "Referee.h"
#include <iostream>

using namespace std;

int main(){
    Human human;
    Computer computer;
    Referee ref;
    cout << "Please input your move, R for Rock, P for Paper, and S for Scissors " << endl;
    
    Player * winner = ref.refGame(&human, &computer);
    if (winner == nullptr){
        cout << "It's a Tie." << endl;
    }

    else{
    cout << winner->getName() << " Wins." << endl;

    };
    
    return 0;
}