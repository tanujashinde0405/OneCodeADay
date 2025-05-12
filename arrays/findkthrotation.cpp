#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.
// Let's suppose we have an array arr = [2, 4, 6, 9], so if we rotate it by 2 times so that it will look like this:
// After 1st Rotation : [9, 2, 4, 6]
// After 2nd Rotation : [6, 9, 2, 4]

// Examples:

// Input: arr = [5, 1, 2, 3, 4]
// Output: 1
// Explanation: The given array is 5 1 2 3 4. The original sorted array is 1 2 3 4 5. We can see that the array was rotated 1 times to the right.

int findKRotation(vector<int> &arr) {
    int n = arr.size();
    int len =0;
    for(int i=0;i<n;i++){
        len++;
        if(arr[i]>arr[i+1])
            break;
    }
    if(len==n)
        return 0;
    else
        return len;
}