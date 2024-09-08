#include "BigNumCalc.h"

BigNumCalc::BigNumCalc(){

}
BigNumCalc::~BigNumCalc(){

}

std::list<int>BigNumCalc::buildBigNum(std::string numString){
    std::list<int> numbers;
    for(int i = 0; i < numString.length(); i++){  ///looping through  string
        numbers.push_back(numString[i] - '0');
    }
    return numbers;
}

std::list<int>BigNumCalc::add(std::list<int> num1, std::list<int> num2){  
    std::list<int> result;
    int carry = 0;

    while((!num1.empty() || !num2.empty()) || carry){
        int temp = carry;

    ///adding num1 to temp
        if(!num1.empty()){   
            temp += num1.back();  //accesing the last element and addign it to temp
            num1.pop_back();    ///removing last element because we already added it to temp
        }
    ///adding num2 to temp
        if(!num2.empty()){   
            temp += num2.back();  //accesing the last element and addign it to temp
            num2.pop_back();    ///removing last element because we already added it to temp
        }
        
        result.push_front(temp % 10);
        carry = temp/10;
    }
    return result;
}

std::list<int>BigNumCalc::sub(std::list<int> num1, std::list<int> num2){
    std::list<int> result;
    int revCarry;
    
    while(!num1.empty() || !num2.empty()){
        int sub = revCarry;
        if(!num1.empty()){
            sub += num1.back();   ///adding last digit of num1 to sub
            num1.pop_back();      ///removing last digit cause already added
        }

        if(!num2.empty()){
            sub -= num2.back();
            num2.pop_back();
        }

        if (sub < 0){    ///making sure reverse carry operation works
            sub += 10;
            revCarry = -1;
        }
        else {
            revCarry = 0;
        }
        result.push_front(sub);
    }
    while (!result.empty() && result.front() == 0){
        result.pop_front();
    }
    return result;
}

std::list<int>BigNumCalc::mul(std::list<int> num1, std::list<int> num2){
    int number = num2.front();   //getting first number of num2
    num2.pop_front(); ///deleting first element of num2

    std::list <int> result;
    result.push_back(0);

    for(int i = 0; i < number; i++){
        result = this-> add(result, num1);
    }
    return result; 
}