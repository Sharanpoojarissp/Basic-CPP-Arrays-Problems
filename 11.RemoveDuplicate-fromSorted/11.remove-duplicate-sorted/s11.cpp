#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void removeDuplicate(int arr[] , int size){
    int space[100];
    int size1 = 100;
    for(int i=0 ; i<size-1 ; i++){
    int j = i+1;
        if(arr[j] == -1){
        continue;
        }

        for(int j=i+1 ; j<size ; j++){
            if(arr[i] == arr[j]){
                space[size1++] = arr[i];
                arr[j] = -1;
            }

            else if(arr[i] != arr[j]){
                space[size1++] = arr[i];
            }
        }
    }
            for(int i=0 ; i<size1 ; i++){
                cout<<space[i] << " " ;
            }
}

int main(){

    int arr[] = {1,2,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    removeDuplicate(arr , size);

    return 0;
}