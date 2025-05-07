#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr, you need to reverse a subarray of that array. The range of this subarray is given by indices l and r (1-based indexing).

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5, 6, 7], l = 2, r = 4
// Output: [1, 4, 3, 2, 5, 6, 7]
// Explanation: After reversing the elements in range 2 to 4 (2, 3, 4), modified array is 1, 4, 3, 2, 5, 6, 7.
vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
    int left = l-1;
    int right = r-1;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    return arr;
}