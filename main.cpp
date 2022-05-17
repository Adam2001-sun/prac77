#include <iostream>

#include "RecursiveBinarySearch.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "Sort.h"
using namespace std;


int main()
{
    vector<int> list;
    vector<int> resultA;
    vector<int> resultB;

    bool resultC;

    int numbers;

         while(cin>>numbers){


            list.push_back(numbers);


            if(cin.get()=='\n'){
            break;
            }
        }

    //QuickSort
    QuickSort qicksort;

    resultA=qicksort.sort(list);

    //BinarySearch

    RecursiveBinarySearch recurbinarysort;


    resultC=recurbinarysort.search(resultA,1);
    cout<<boolalpha<<resultC;

    for(int i=0; i<resultA.size();i++){
        
        cout<<"  "<<resultA.at(i);
    }
    return 0;

}
