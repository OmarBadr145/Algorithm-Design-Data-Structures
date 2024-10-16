#include <vector>
#include <queue>
#include <iostream>

int kth_largest(std::vector<int> values, int k){
    std::priority_queue<int, std::vector<int>, std::greater<int>> priorityQueue; ///initialising a priority queue
    int n = values.size();   ///size of values
    for(int i = 0; i < n; i++){ ///looping through values
        priorityQueue.push(values[i]);  ///pushing values through the priority queue
    }

    for(int i = 0; i < (n-k); i++){
        priorityQueue.pop();
    }
    return priorityQueue.top();
};
