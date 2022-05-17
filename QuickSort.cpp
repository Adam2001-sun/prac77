
  // REFERENCE FROM https://www.geeksforgeeks.org/
   
    
#include "QuickSort.h"
#include <vector>
using namespace std;


int partition(int *arr, int start, int end)
{

    int pivot = arr[start];

    int counter = 0;

    for (int i = start + 1; i <= end; i++) {

        if (arr[i] <= pivot)

            counter++;
    }

    // Giving pivot element its correct position

    int pivotPosition = start + counter;

    swap(arr[pivotPosition], arr[start]);


    int i = start;
    int j = end;

    while (i < pivotPosition && j > pivotPosition) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotPosition && j > pivotPosition) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotPosition;
}

void qsHelper(int *arr, int begin, int end)
{
  

    if (begin >= end)
        return;
    // partitioning the array
    int p = partition(arr, begin, end);

    // left part

    qsHelper(arr, begin,  p - 1);

    // right part
    qsHelper(arr, p + 1, end);
}

std::vector<int> QuickSort::sort(std::vector<int> list) {

    qsHelper(list.data(), 0, list.size()-1);

    return list;
}
