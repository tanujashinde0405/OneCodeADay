#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a sorted array arr consisting of 0s and 1s. The task is to find the index (0-based indexing) of the first 1 in the given array.

// NOTE: If one is not present then, return -1.

// Examples :

// Input : arr[] = [0, 0, 0, 0, 0, 0, 1, 1, 1, 1]
// Output : 6
// Explanation: The index of first 1 in the array is 6.
// Time Complexity : O(logn)
// space Complexity: O(1)

int firstIndex(vector<int> &arr) {
    int n = arr.size();
    int low=0,high=n-1;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        
        if(arr[mid]==1 && (mid==0 || arr[mid-1]==0))
            return mid;
        else if(arr[mid]==1)
            high = mid-1;
        else
            low= mid+1;
    }
    return -1;
}