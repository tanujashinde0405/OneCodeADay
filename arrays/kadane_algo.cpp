#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an integer array arr[]. You need to find the maximum sum of a subarray.

// Examples:

// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.

int maxSubarraySum(vector<int> &nums) {
    int res = nums[0];
    int maxending = nums[0];

    for(int i=1;i<nums.size();i++){
        maxending = max(maxending+nums[i], nums[i]);
        res = max(res, maxending);
    }
    return res;
}