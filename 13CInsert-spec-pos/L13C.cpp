#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void Insert_at_pos(int arr[9] , int n , int element , int pos){
     for (int i = n ; i >= pos; i--)
    //  for (int i = n ; i >= pos-1; i--) -->runing
    {
        arr[i] = arr[i - 1];
    }
        arr[pos-1] = element;
}

int main(){
    
int arr[13] = {10, 9 ,14 ,8 ,20 ,48 ,16, 9,55,44,77,88};
int n = 12;

int pos = 8;
int element = 4000;

Insert_at_pos(arr , n , element , pos );

for(int i=0 ; i<=n ; i++){
    cout<<arr[i] << "  ";
}

    return 0;
}

// 10 9 14 8 40 20 48 16 9
// 10 9 14 8 40 20 48 16 9 