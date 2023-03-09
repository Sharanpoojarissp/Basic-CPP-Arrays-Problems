#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void nonrep(int arr[] , int size ){
    sort(arr , arr+size );

    if(arr[0] != arr[1] ){
        cout<< arr[0] <<" ";
    }

    for(int i=1 ; i<size-1 ; i++ ){
        if(arr[i-1] != arr[i] && arr[i] != arr[i+1]){
            cout<< arr[i] << " ";
        }
    }

     if(arr[size-2] != arr[size-1]){
        cout<<arr[size-1];
     } 
    
}
int main(){
    
int arr[] = {1,2,2,3,4,4,5,6,7,7,8};
int n = sizeof(arr)/sizeof(arr[0]);

nonrep(arr , n);
    return 0;
}