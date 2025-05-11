#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.

// Examples:

// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
// Explanation: There are three 0s that are moved to the end.
// O(n), O(1)

void pushZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int k =0;
    for(int i =0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[k]);
            k++;
        }
    }
}