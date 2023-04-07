#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int product(int arr[] , int size){
    int answer = INT_MIN;
    int current_product = 1;

    // from right side traversal :  
    for(int i=0 ; i<size ; i++){
        current_product = current_product * arr[i];
        answer = max(answer , current_product);

        if(current_product == 0 ){
            current_product = 1;
        }
    }

    // from left side traversal : 
    current_product = 1;
    for(int i=size-1 ; i>=0 ; i--){
        current_product = current_product * arr[i];
        answer = max(answer , current_product);

        if(current_product == 0 ){
            current_product = 1;
        }
    }

        return answer;
}

int main(){

    int arr[] = {-1, -3, -10, 0, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< " the maximum product is : " << product( arr , size );
    
    return 0;
}