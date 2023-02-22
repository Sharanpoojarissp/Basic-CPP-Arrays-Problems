#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int secondLargest(int arr[5] , int n ){
    sort(arr , arr+n);
    return arr[n-2];
}

int secondSmallest(int arr[5] , int n ){
    sort(arr , arr+n);
    return arr[1];
}


int main(){
    int arr[5] = {5,8,-9,6,-7};
    int n = 5;
    cout<<"secondlargest element is : "<<secondLargest(arr , n)<<endl;
    cout<<"secondSmallest element is : "<<secondSmallest(arr , n)<<endl;
    return 0;
}

