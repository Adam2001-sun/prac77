//
// Created by Fengyuan on 2022/5/16.
//

#include "RecursiveBinarySearch.h"


int binarySearch(int *arr,int n,int target){
    bool isLeftPart;
    bool isOdd;

    //base
    if (n==1){
        if(arr[0]!=target){
            return -1;
        } else{
            return 0;
        }
    }


    if (n%2==0){
        //even
        isOdd= false;
        //1 2 3 4
        //divides into 2. pick < 3
        isLeftPart= target < arr[n/2];//arr[n/2+1 -1]
    }else{
        //odd
        isOdd= true;
        //1 2 3 4 5
        //divides into 2.5, should round up to 3.
        int middle=n/2+1;
        if (target==arr[middle-1]){
            return middle;
        }

        isLeftPart=target < arr[middle-1];
    }
    int *new_arr=arr;
    int new_n;
    if (isLeftPart){
        //1 2 3 4
        //1 2 3 4 5
        new_n=n/2;



    } else{
        //1 2 3 4
        //1 2 3 4 5
        new_n=n/2;
        if (isOdd){
            //read from 4( bypass middle)
            new_arr=new_arr+n/2+ 1;
        } else{
            //read from 3(no middle)
            new_arr=new_arr+n/2 ;
        }

    }

    return binarySearch(new_arr, new_n, target);
}
//1 2 3 4 5 6 7 8 9
//4.5
//5
bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    if (binarySearch(list.data(),list.size(),target)==-1){
        return false;
    }
    return true;
}
