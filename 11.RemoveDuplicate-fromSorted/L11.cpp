#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int length(int arr[] , int n ){

  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main(){
    int arr[7] = {1,1,2,2,2,3,3};
    int n = 7;

    cout<<length(arr , n); 
    return 0;
}