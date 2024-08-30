#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class BinarySearch{
public:
    bool search(std::vector<int> list, int number);
    int  RecursiveSearch(std::vector<int> list, int number, int low, int high); ///helper function

private:
int high;
int low;
};

#endif