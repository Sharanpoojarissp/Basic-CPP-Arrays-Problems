#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void print(int arr[5] , int n ){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[5] , int n ){
    int start = 0 ; 
    int end = n-1;

    while(start <= end ){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
     print(arr , n);
}



int main(){ 
    int arr[5] = { 5 , 55 ,44 , 87 , 66};
    int n = 5;

    reverse(arr , n);
    // print(arr , n);
    return 0; 
}