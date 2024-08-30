#include "RecursiveBinarySearch.h"

int BinarySearch::RecursiveSearch(std::vector<int> list, int number, int low, int high){
///recursive method
    if (high >= low){
        int mid = low + (high - low) /2;

        if (number == list[mid]){
            return mid;
        }
        if (number > list[mid]){
            return RecursiveSearch(list, number, mid + 1, high);
        }
        return RecursiveSearch(list, number, low, mid - 1);
    }
    return -1;  ///If the number is unfound then return 
};

bool BinarySearch::search(std::vector<int> list, int number){
    int result = RecursiveSearch(list, number,0,list.size()); ///running recursive search 0 is low and the list size is the size
    if (result == -1){
        return false;
    }
    else{
        return true;
    }
    return false;
};