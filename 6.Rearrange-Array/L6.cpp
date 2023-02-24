#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void print(int arr[] , int  n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void increaseOrderArrange(int arr[] , int n ){
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i] > arr[j]){
                swap(arr[i] , arr[j]);
            }
        }
    }
        print(arr , n );
}
int main(){
     int arr[] = {-220,70,77,-10,100 , 500 , 778 , -200 , 0};
    int n = (sizeof(arr)/sizeof(arr[0]));
    increaseOrderArrange(arr , n);
   
    return 0;
}