#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int printAfterRemovingDuplicates(int arr[] , int size){
    sort(arr , arr+size);
    int j=0;
    for(int i=0 ; i<size ; i++){
      if(arr[i] != arr[j]){
        // j++; 
        // arr[j] = arr[i];
        arr[++j] = arr[i];
      }
    }
      return j+1;
  }


int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5 , 1,2,3,77,77,88,55};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<" the number of unique elements in the given array is : "<<printAfterRemovingDuplicates(arr , size);
  return 0;
}