#include <Truckloads.h>
#include <iostream>

int main(){
int numCrates = 14;
int loadSize = 3;
int res = 0;
Truckloads trucking;
res = trucking.numTrucks(numCrates,loadSize);
std::cout << res << std::endl;
return 0;
}