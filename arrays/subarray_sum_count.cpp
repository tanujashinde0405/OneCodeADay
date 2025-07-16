#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2


int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> sums;
    int res=0, currsum=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        currsum += nums[i];

        if(currsum == k)
            res++;
        if(sums.find(currsum-k) !=   sums.end()){
            res += sums[currsum - k];
        }
        sums[currsum]++;
    }
    return res;
}