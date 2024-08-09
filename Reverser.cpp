#include "Reverser.h"
#include <bits/stdc++.h>

int Reverser::reverseDigit(int value){

if(value < 10 && value >= 0){
    return value;
}
if (value < 0 ){return -1;};
int r = value % 10;
int i = log10(value);
return r*pow(10,i)+reverseDigit(value/10);
}

std::string Reverser::reverseString(std::string valueString){
    if(valueString.length() == 1){ //basecase
        return valueString;
    }
    return reverseString(valueString.substr(1,valueString.length())) + valueString.at(0);
}