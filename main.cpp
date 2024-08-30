#include "QuickSort.h"
#include "Sort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

using namespace std;
int main() {
    BinarySearch Test;
    QuickSort TestQuicksort;

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    TestQuicksort.sort(arr, 0, n - 1);
    Test.search(arr, 9);
    cout << Test.search(arr, 9) << endl;

    return 0;
}