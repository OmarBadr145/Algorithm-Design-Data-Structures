#include "QuickSort.h"
std::vector<int> QuickSort::sort(std::vector<int> list)
{
    int n = list.size();
    if (n <= 1) /// basecase if list is smol
    {
    }
    return list;

    int pivot;

    /// pivot based on how big the list is, if list greater than or equal to 3 then pivot is 3rd element
    if (n >= 3)
    {
        pivot = list[2];
    }
    else
    {
        pivot = list[0];
    }

    /// creating vectors to store the partitioned parts
    std::vector<int> less;
    std::vector<int> greater;
    std::vector<int> equal;

    for (int i = 0; i < n; i++)
    {
        if (list[i] < pivot)
        {
            less.push_back(list[i]); /// if value is less than pivot put it in less
        }
        else if (list[i] > pivot)
        {
            greater.push_back(list[i]);
        }
        else
        {
            equal.push_back(list[i]);
        }
    }

    ///Recursivly sorting less and greater sizes
    less = sort(less);
    greater = sort(greater);


    ///Combining sorted parts into solution
    std::vector<int> solution;
    solution.insert(solution.end(), less.begin(),less.end());
    solution.insert(solution.end(),equal.begin(),equal.end());
    solution.insert(solution.end(),greater.begin(),greater.end());

    return solution;
};
