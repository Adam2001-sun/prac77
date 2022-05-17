//
// Created by Fengyuan on 2022/5/16.
//

#ifndef ADDS_PRAC7_QUICKSORT_H
#define ADDS_PRAC7_QUICKSORT_H
#include "Sort.h"

class QuickSort : public Sort{
public:
        std::vector<int> sort(std::vector<int> list) override;
};


#endif //ADDS_PRAC7_QUICKSORT_H
