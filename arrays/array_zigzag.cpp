#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr of distinct elements, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form: 

// arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

// Note: Modify the given arr[] only, If your transformation is correct, the output will be "true" else the output will be "false". 

// Examples

// Input: arr[] = [4, 3, 7, 8, 6, 2, 1]
// Output: true
// Explanation:  After modification the array will look like 3 < 7 > 4 < 8 > 2 < 6 > 1, the checker in the driver code will produce 1.

void zigZag(vector<int> &arr) {
    int n = arr.size();
    for (int i=0; i<n-1; i++) {
        if ((arr[i] < arr[i+1]) == (i%2 == 1)) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}