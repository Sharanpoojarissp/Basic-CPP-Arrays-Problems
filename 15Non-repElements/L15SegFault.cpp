#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void nonrepNumber(int arr[] , int n ){
    int anotherarray[n];
    int count = 0 ;

    //? 1 1 2 2 3 4 5 5 6 => 9 elements ! 
    for(int i= 0 ; i< n ; i++){
        for(int j =0 ; j<n ; j++){
            if( i!=j && arr[i] != arr[j]){
                anotherarray[count++] = arr[i]; 
            }
        }
    }

    sort(anotherarray , anotherarray+count);

    for(int i =0 ; i< count ; i++){
        if(arr[i] != arr[i+1]){
            cout<< anotherarray[i]<< " ";
        }
    }
}

int main(){

    int array[] = {200,400,2,3,4,8,9,7,200,2,3,4,200,9 };
    int size = sizeof(array)/sizeof(array[0]);

    nonrepNumber(array , size);

    return 0;

}
