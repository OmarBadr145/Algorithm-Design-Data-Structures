#include "QuickSort.h"
#include "Sort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

using namespace std;
int main() {
    BinarySearch Test;

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11};
    Test.search(arr, 9);
    cout << Test.search(arr, 9) << endl;

    return 0;
}