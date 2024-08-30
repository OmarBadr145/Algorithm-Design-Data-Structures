#include "QuickSort.h"
#include "BubbleSort .h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

using namespace std;
int main() {
    QuickSort Test;

    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    Test.sort(arr, 0, n - 1);

    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++) {
        cout << Test.sort(arr, 0, n - 1)[i] << " ";
    }
    return 0;
}