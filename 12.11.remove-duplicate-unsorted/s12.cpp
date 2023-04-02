#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void remove(int arr[] , int size){
    sort(arr , arr+size);
    for(int i=0;i<size-1 ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(arr[i] == arr[j] && arr[i]!= arr[i-1]){
                cout<<arr[i] << " " ;
                break;
            }
        }
    }
}

int main(){
    int arr[] = { 4, 3, 9, 2, 4, 1, 10, 89, 34};
    int size = sizeof(arr)/sizeof(arr[0]);

    remove(arr , size);

    return 0;
}
