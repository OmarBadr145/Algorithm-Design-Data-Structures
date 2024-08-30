#include "QuickSort.h"

int QuickSort::partition(std::vector<int>& list, int start, int end) {
    // Pivot selection based on the requirement
    int pivotIndex;
    if (end - start + 1 >= 3) {
        pivotIndex = start + 2;  // Select the third element as pivot if the list has at least 3 elements
    } else {
        pivotIndex = end;  // Otherwise, select the last element as the pivot
    }

    int pivot = list[pivotIndex];
    std::swap(list[pivotIndex], list[end]);  // Move pivot to the end for the partitioning logic

    int i = start - 1;

    for (int j = start; j <= end - 1; j++) {
        if (list[j] <= pivot) {
            i++;
            std::swap(list[i], list[j]);
        }
    }
    std::swap(list[i + 1], list[end]);
    return i + 1;
}

std::vector<int> QuickSort::sort(std::vector<int>& list, int start, int end) {
    if (start < end) {
        int partitionIndex = partition(list, start, end);

        // Recursion calls for the left side (smaller elements) and the right side (larger elements)
        sort(list, start, partitionIndex - 1);
        sort(list, partitionIndex + 1, end);
    }
    return list;
}
