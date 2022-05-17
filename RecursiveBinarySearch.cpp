

#include "RecursiveBinarySearch.h"


int binarySearch(int *arr,int n,int target){


    bool ifOdd;
     bool isLeft;


    if (n==1){
        if(arr[0]!=target){
            return -1;
        } else{
            return 0;
        }
    }


    if (n%2==0){
       
        ifOdd= false;
       
        isLeft= target < arr[n/2];
    }else{
        
        ifOdd= true;
       
        int middle=n/2+1;
        if (target==arr[middle-1]){
            return middle;
        }

        isLeft=target < arr[middle-1];
    }
    int *new_arr=arr;
    int new_n;

    if (isLeft){
      
        new_n=n/2;


    } else{
      
        new_n=n/2;
        if (ifOdd){
          
            new_arr=new_arr+n/2+ 1;
        } else{
           
            new_arr=new_arr+n/2 ;
        }

    }

    return binarySearch(new_arr, new_n, target);
}


bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    if (binarySearch(list.data(),list.size(),target)==-1){
        return false;
    }
    return true;
}
