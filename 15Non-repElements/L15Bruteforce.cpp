#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void nonrep(int arr[] , int size){
    bool check;

    for(int i=0 ; i<size ; i++){
        check = false;
            for(int j=0 ; j< size ; j++){
                if(i != j && arr[i]==arr[j]){
                    check = true;
                    break;
                }
            }

            // if(check == false ){     --> prints 1 3 5 7
            if(check == true ){        // --> prints 2 2 4 4 6 6 
                cout<< arr[i] <<" ";
            }
    }
}
int main(){
    
    int arr[] = {1,2,2,3,4,4,5,6,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    nonrep(arr , n);

    return 0;
}