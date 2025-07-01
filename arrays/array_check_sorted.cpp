#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

// Examples:

// Input: arr[] = [10, 20, 30, 40, 50]
// Output: true
// Explanation: The given array is sorted.

bool arraySortedOrNot(vector<int>& arr) {
    int n = arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1])
            continue;
        else
            return false;
    }
    return true;
}