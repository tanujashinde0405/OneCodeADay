#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a sorted array arr and an integer k, find the position(0-based indexing) at which k is present in the array using binary search.

// Note: If multiple occurrences are there, please return the smallest index.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5], k = 4
// Output: 3
// Explanation: 4 appears at index 3.

int binarysearch(vector<int> &arr, int k) {
    auto it = lower_bound(arr.begin(), arr.end(), k);
    if(it == arr.end() || *it != k)
        return -1;
    return it-arr.begin();
}

int binarysearch(vector<int> &arr, int k) {
    int n = arr.size();
    int low=0, high = n-1;
    while(low<=high){
        int mid = low+ (high-low) /2;
        if(arr[mid]== k){
            if(mid == 0 || arr[mid-1] != arr[mid])
                return mid;
            else if(arr[mid-1] == arr[mid])
                high = mid-1;
        }
        else if(k > arr[mid])
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}