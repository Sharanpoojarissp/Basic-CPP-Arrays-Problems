#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int sumofArray(int arr[] , int n){
    int sum = 0;
    for(int i =0 ; i< n ; i++ ){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {10,10,20,20,30,30,40,40,100};
    int n = (sizeof(arr)/sizeof(arr[0]));

    cout<<sumofArray(arr , n);
    return 0;
}