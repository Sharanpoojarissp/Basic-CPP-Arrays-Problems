#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int product(int arr[] , int size){

    int result = INT_MIN;
    for(int i=0 ; i<size-1 ; i++ ){
        for(int j = i+1 ; j< size ; j++ ){
         int prod = 1;
           for(int k=i;k<=j;k++){
            prod *= arr[k];
            result = max(result,prod); 
           }
        }
    }
    return result;
}
int main(){

    int arr[] = {1,2,-3,0,-4,-5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< " the maximum product is : " << product( arr , size );
    

    return 0;
}