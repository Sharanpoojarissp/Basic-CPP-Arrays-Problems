#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = { 200 , 500 , 400 ,800 ,900 ,700};
    int n = arr.size();

    sort(arr.begin() , arr.end());

    // first three elements increasing order : 
    for(int i = 0 ; i<n/2 ; i++){
        cout<<arr[i]<<" "; 
    }

    for(int i=n-1 ; i>= n/2 ; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}