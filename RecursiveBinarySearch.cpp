#include "RecursiveBinarySearch.h"

bool BinarySearch::search(std::vector<int> list, int number){
    if (list.size() == 1 && list[0] == number){  ///basecase 
        return true;
    }

    else if(list.size() == 1){
        return false;
    }
    
    int middle = (list.size()-1/2);

    if(list[middle] > number){
        std::vector<int> solution(list.begin(),list.begin() + middle);
        return search(solution,number);   ///recursive search left half
    }

    else if (list[middle] < number){
        std::vector<int> solution(list.begin()+ middle + 1,list.end());
        return search(solution,number);    ///recursive search right half
    }

    else{
        return true;
    }


};