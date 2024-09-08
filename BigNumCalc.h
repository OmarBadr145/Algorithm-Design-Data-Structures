#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H
#include <list>
#include <string>

class bigNumCalc {
bigNumCalc();   ///constructor
~bigNumCalc(); ///destructor
std::list<int> buildBigNum(std::string numString); ///Creating a list from a provided string, "12345" becomes "1","2"...
std::list<int> add(std::list<int> num1, std::list<int> num2); ///Adds num1 to num2, return sum
std::list<int> sub(std::list<int> num1, std::list<int> num2);///Subtract num2 from num1 and return difference
std::list<int> mul(std::list<int> num1, std::list<int> num2);/// Multipuly num1 by num1 and return product. assume num 2 is one digit long
};



#endif