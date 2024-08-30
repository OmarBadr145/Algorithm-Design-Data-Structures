#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class BinarySearch{
public:
    int  RecursiveSearch(std::vector<int> list, int number, int low, int high); ///helper function
    bool search(std::vector<int> list, int number);

private:
int high;
int low;
};

#endif