//! Brute Force Method ! 
#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void repeatingElements(int arr[] , int size){
    int storearray[size];
    int count = 0; 
    for(int i=0 ; i<size ; i++ ){
        for(int j =0 ; j<size ; j++){
            if(i!=j && arr[i] == arr[j]){
                storearray[count++] = arr[i];
            }
        }
    }

    // printing the element repeating : 
    sort ( storearray , storearray+count);
    for(int i=0 ; i<count ; i++ ){
        if(storearray[i] != storearray[i+1]){
            cout<< storearray[i] << " ";
        }
    }

}
int main(){
    int array[] = {200,400,2,3,4,8,9,7,200,2,3,4,200,9 };
    int size = sizeof(array)/sizeof(array[0]);
    repeatingElements(array , size);
    return 0;
}

//! One problem with this is that we cannot use it for the Array[19] = { 1,2,2,3,3,3,35,5,5,4}; int size = 10; type ! 