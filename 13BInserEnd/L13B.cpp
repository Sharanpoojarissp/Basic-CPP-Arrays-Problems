#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void insertBegining(int arr[] , int n , int insert_this_num){
        arr[n] = insert_this_num;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int insert_this_number = 100;

    cout<<"before inserting the 100 in the begining the array was : "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    insertBegining(arr , n , insert_this_number);
    cout<<"after inserting the 100 in the begining the array is : "<<endl;
    for(int i=0 ; i<=n ; i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}