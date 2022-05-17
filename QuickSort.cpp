//
// Created by Fengyuan on 2022/5/16.
//

#include "QuickSort.h"
#include <vector>
using namespace std;
int partition(int *arr, int start, int end)
{
    // REFERENCE FROM https://www.geeksforgeeks.org/
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void sortHelper(int *arr, int begin, int end)
{
    // REFERENCE FROM https://www.geeksforgeeks.org/
    // base
    if (begin >= end)
        return;
    // partitioning the array
    int p = partition(arr, begin, end);

    // left part
    sortHelper(arr, begin, p - 1);

    // right part
    sortHelper(arr, p + 1, end);
}

std::vector<int> QuickSort::sort(std::vector<int> list) {
    sortHelper(list.data(),0,list.size()-1);
    return list;
}
