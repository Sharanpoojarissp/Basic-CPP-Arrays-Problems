#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void reverse( int arr[8] , int start , int end  ){
    int i = start;
    int j = end;
     while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotateArray(int arr[8] , int n , int k ){ 
    k = k%n;
    if(k<0){
        k = k + n;      
    }
    reverse(arr , 0 , n-k-1);
    reverse(arr , n-k , n-1);
    reverse(arr , 0 , n-1 );
}

int main(){

    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int k = 3;

    rotateArray( arr , n , k);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}