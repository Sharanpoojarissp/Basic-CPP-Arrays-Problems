#include<iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){ 
    int n = 5;
    int arr[5] = {10,2,44,-9,55};
    int smallest = arr[0];           
    
    for(int i = 1; i<n ; i++){
        if(smallest > arr[i])
        smallest = arr[i];
    }

    cout<<smallest; 

    return 0;
}