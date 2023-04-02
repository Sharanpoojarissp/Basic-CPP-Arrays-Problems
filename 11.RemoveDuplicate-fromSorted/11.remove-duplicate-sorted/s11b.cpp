#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void remove(int arr[] , int size){
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
    int arr[] = { 1,2,2,3,4,5,5,6,6,6,7,7,7,8, 80 ,85,85,90,90,91,95,95,100 , 1002 , 1002 , 1900 , 2000};
    int size = sizeof(arr)/sizeof(arr[0]);

    remove(arr , size);

    return 0;
}
