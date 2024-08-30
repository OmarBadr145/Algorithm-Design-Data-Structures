#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    int i, j;
    for (i = 0; i < list.size(); i++)
    {
        swapped = false; /// Set swapped to false every time
        for (j = 0; j < list.size(); j++)
        {
            if (list[j] > list[j + 1])
            {
                std::swap(list[j], list[j + 1]);
                swapped = true;
            }
        };
        if (swapped == false)
        {
            break;
        };
    };
    return list;
};
