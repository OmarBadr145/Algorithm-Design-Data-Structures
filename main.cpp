#include "BubbleSort.h"
#include "QuickSort.h"
#include "Sort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>
#include <sstream>

int main(){
    std::string input;
    std::getline(std::cin,input);
    std::istringstream inputString(input);
    std::vector<int> list;

    int temp;

    while(inputString >> temp){
        list.push_back(temp);
    }

    RecursiveBinarySearch * binarySearch = new RecursiveBinarySearch();
    Sort * sorter = new QuickSort();
    list = sorter->sort(list);

    std::cout << (binarySearch->search(list,1) ? "true" : "false");
    for (int i = 0; i < list.size(); i++){
        std::cout << " " << list[i];
    }

    std::cout << std::endl;
    return 0;
}