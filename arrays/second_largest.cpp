#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

// Examples:

// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
int getSecondLargest(vector<int> &arr) {
    // code here
    int first = -1;
    int second = -1;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]<first){
            if(second == INT_MIN || second<arr[i])
                second = arr[i];
        }
    }
    return second;
}