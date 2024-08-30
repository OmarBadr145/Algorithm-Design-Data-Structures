#include "QuickSort.h"
#include "Sort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

using namespace std;
int main() {
BubbleSort TestBubble;
QuickSort Test;
std::vector<int> list = {0,2,6,8,3,-1};

vector<int> sorted = TestBubble.sort(list); ///testing bubble

for(int i : sorted){
    cout << i << endl;
}
};