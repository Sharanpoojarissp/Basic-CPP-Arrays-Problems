#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void print(int arr[10] , int n ){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int countfreq(int arr[10] , int n ){
    int store[10] = {0};
    int k = 10;
    int count =0;
for(int i = 0 ; i<n ; i++){
     count = 1;
    for(int j=i+1 ; j<n ; j++){
        if(arr[i] == arr[j]){
            count ++; 
            store[j] = -1;
        }
      }
  }
    
    store[10]=count;
    for(int i=0 ; i<k ; i++ ){
        if(arr[i]!=-1){
            cout<<arr[i]<<" "<<store[i];
        }
    }

    return 0;
}

int main(){
    int arr[10] = { 1,1,2,2,3,3,3,3,3,3};
    int n = 10;
    int store[10];
    int k = 10;
    cout<<countfreq(arr , n);
    return 0;
}