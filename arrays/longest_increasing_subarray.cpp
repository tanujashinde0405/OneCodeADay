#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] of integers. The problem is finding the longest contiguous subarray's length such that every element is strictly greater than its previous element in the same subarray.

// Examples:

// Input: arr[] = [5, 6, 3, 5, 7, 8, 9, 1, 2]
// Output: 5
// Explanation: here the subarray arr[2:6] = [3, 5, 7, 8, 9] is longest subarray to follow strictly increasing order.

int lenOfLongIncSubArr(vector<int> &arr) {
    int max = 1, len = 1;
    int n = arr.size();
    for (int i=1; i<n; i++)
    {
        if (arr[i] > arr[i-1])
            len++;
        else
        {
            if (max < len)    
                max = len;
            len = 1;    
        }   
    }
    if (max < len)
        max = len;
    return max;
}