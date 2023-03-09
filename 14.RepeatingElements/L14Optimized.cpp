//! Optimized Method ! 
#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void repeatingElements(int arr[] , int size){
    
    sort(arr  , arr + size) ; 

    for(int i =0 ; i<size ; i++ ){
        if(arr[i] == arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int array[] = { 1,1,2,3,4,4,5,2,3,5, 100 , 100 , 200 , 200};
    int size = sizeof(array)/sizeof(array[0]);

    repeatingElements(array , size);

    return 0;
}