#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double average(int arr[] , int n){
   double sum = 0;
   for(int i =0 ; i<n ; i++){
    sum += arr[i];
   }
   return (double)sum/n;
   
}

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    cout<<average(arr , n);
    return 0;
}