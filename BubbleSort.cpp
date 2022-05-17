//
// Created by Fengyuan on 2022/5/16.
//

#include "BubbleSort.h"
#include <valarray>
using namespace std;

std::vector<int> BubbleSort::sort(std::vector<int> list) {

    int len=list.size();

    // not i<len because the last i value is already in place
    for (int i = 0; i < len - 1; i++)

    {

        for (int j = 0; j < len  - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                swap(list[j], list[j + 1]);
            }
        }
    }

    return list;
}
