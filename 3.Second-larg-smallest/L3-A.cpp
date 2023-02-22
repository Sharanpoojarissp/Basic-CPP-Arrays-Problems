#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int secondLargest(int arr[5] , int n ){
    int larg = INT_MIN;
    int sec_larg = INT_MIN;

    for(int i = 0 ; i<n ; i++){
        if(arr[i] > larg){
            larg = arr[i];
            sec_larg = larg;
        }

        else if(arr[i] < larg && arr[i] > sec_larg){
            sec_larg = arr[i];
        }
    }

    return sec_larg;
}

int main(){
    int arr[5] = { 10 , 44 , 56 , 78 , 11};
    int n = 5;

    cout<<secondLargest(arr , n )<<endl;

    return 0;
}
