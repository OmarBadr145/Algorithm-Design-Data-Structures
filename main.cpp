#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>
#include <string>

int main(){
int numCrates = 14;
int loadSize = 3;
int res = 0;
///truck load 
Truckloads trucking;
res = trucking.numTrucks(numCrates,loadSize);

//reversing ints
Reverser reverser;
int rev = 0;
rev = reverser.reverseDigit(54321);

//reversing string
Reverser reverserString;

std::cout << reverserString.reverseString("Welcome") << std::endl;
return 0;
}