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
    
    Player * winner = ref.refGame(&human, &computer);
    cout << winner->getName() << " wins!" << endl;
    
}