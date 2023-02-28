#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void median(int arr[ ] , int n){
    // int mediana;
    sort(arr,arr+n);    
    if(n%2==0){
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else{
        cout<<arr[(n/2)];
    }
}

int main(){
    // int arr[] = {55,44,88,99,77,55,44,55,11,22,1,4,5,7,8,9};
    int arr[] = {4,7,1,2,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    median(arr , n );
    return 0;
}