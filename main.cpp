#include "Human.h"
#include "Computer.h"
#include "MoveFactory.h"
#include "Player.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Referee.h"
#include <iostream>

using namespace std;

int main(){
    Human human("bruh");
    Computer computer;
    Referee ref;
    cout << "Please input your move,Rock,Paper, or Scissors " << endl;
    
    Player * winner = ref.refGame(&human, &computer);
    if (winner == nullptr){
        cout << "It's a Tie." << endl;
    }

    else{
    cout << winner->getName() << " Wins." << endl;

    };
    
    return 0;
}