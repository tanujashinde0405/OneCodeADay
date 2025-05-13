#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array, arr of positive integers. Find the third largest element in it. Return -1 if the third largest element is not found.

// Examples:

// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3
// Explanation: The third largest element in the array [2, 4, 1, 3, 5] is 3.

int thirdLargest(vector<int> &arr) {
    int n = arr.size();
    if(n<3)
        return -1;
    int first=arr[0];
    int second = INT_MIN;
    int third = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second){
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third){
            third = arr[i];
        }
    }
    return third;
}