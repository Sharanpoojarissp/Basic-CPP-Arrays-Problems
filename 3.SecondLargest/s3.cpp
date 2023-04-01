#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int arr[] = {99,48,55,44,77,100};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr , arr+size);

    cout<<"the largest : " << arr[size-1] << " " << "the second largest : " << arr[size-2] ;
    cout<<endl;
    cout<<"the smallest : " << arr[0] << " " << "the second smallest  : "<< arr[1] ;

    return 0;
}