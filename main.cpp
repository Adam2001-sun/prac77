#include <iostream>

#include "RecursiveBinarySearch.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "Sort.h"
using namespace std;


int main()
{

    //create vector to store the input numbers
    vector<int> table;
    vector<int> result1;
    vector<int> result3;
    bool result2;
    int numbers;

    while(cin>>numbers){
        table.push_back(numbers);
        if(cin.get()=='\n'){
            break;
        }
    }

    //QuickSort
    QuickSort qsort;
    result1=qsort.sort(table);

    //BinarySearch
    RecursiveBinarySearch rbsort;
    result2=rbsort.search(result1,1);
    cout<<boolalpha<<result2;

    // BubbleSort bsort;
    // result3 =bsort.sort(result1);
    //Print array
    for(int i=0; i<result1.size();i++){
        cout<<"  "<<result1.at(i);
    }
    return 0;

}
