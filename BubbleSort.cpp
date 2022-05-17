
#include "BubbleSort.h"
#include <valarray>
using namespace std;

std::vector<int> BubbleSort::sort(std::vector<int> list) {

    int length=list.size();

    for (int i = 0; i < length - 1; i++)

    {

        for (int j = 0; j < length  - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                swap(list[j], list[j + 1]);
            }
        }
    }

    return list;
}
