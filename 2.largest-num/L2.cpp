//! Conventional Method 
// #include<iostream>
// #include <bits/stdc++.h>
// #include <cmath>
// using namespace std;

// int largest(int arr[4] , int n ){
//     int max = INT_MIN;
//     for(int i =0; i<n ; i++){
//     if(arr[i] > max){
//         max = arr[i];
//     }
//   }
//   return max;
// }

// int main(){
//     int arr[4] = { 0 , 19 , 87, -5};
//     int n = 4;
//     cout<<"the largest element in the arraya is "<<largest(arr,n);
//     return 0;
// }


/* max = -999 , 0 , 19  , 87
0 > -999 , 19>0 , 19>87 , 87>-5? nope
max = 0 , 19 , 87 , so return max when for loop ends 

*/
 
// C++ program to find maximum in arr[] of size n
#include <bits/stdc++.h>
using namespace std;
int largest(int arr[4], int n)
{
	return *max_element(arr, arr+n);
}

int main()
{
	int arr[5] = {10, 324, 45, 90, 9808};
	int n = 5;
	cout << largest(arr, n);
	return 0;
}
