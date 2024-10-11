#include <vector>
#include <queue>
#include <iostream>

int kth_largest(std::vector<int> values, int k){
    std::priority_queue<int, std::vector<int>, std::greater<int>> priorityQueue;
    int n = values.size();
    for(int i = 0; i < n; i++){
        priorityQueue.push(values[i]);
    }

    for(int i = 0; i < (n-k); i++){
        priorityQueue.pop();
    }
    return priorityQueue.top();
};
