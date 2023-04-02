#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void countfreq(int arr[] , int size ){
    // created a vector with all values as false 
    vector<bool> visited(size,false);

    for(int i=0 ; i<size-1 ; i++){
        if(visited[i] == true){
            continue;
        }

        int count = 1;
        for(int j=i+1 ; j<size ; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
    cout<<"the frequency of "<< arr[i] << " " << "is : " << count << endl;
    }

}

int main(){
    int arr[] = {5,10,15,10,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    countfreq(arr , size);
    return 0;
}