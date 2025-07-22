#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an integer array arr[] and an integer k (where k ≥ arr.length), find the smallest positive integer divisor such that the sum of the ceiling values of each element in arr[] divided by this divisor is less than or equal to k.

// Examples:

// Input: arr[] = [1, 2, 5, 9], k = 6
// Output: 5
// Explanation: 5 is the smallest divisor having sum of quotients (1 + 1 + 1 + 2 = 5) less than or equal to 6.
// Input: arr[] = [1, 1, 1, 1], k = 4
// Output: 1
// Explanation: 1 is the smallest divisor having sum of quotients (1 + 1 + 1 + 1 = 4) less than or equal to 4.

// Time Complexity: O(n log(max(arr)))
// Space Complexity: O(1)
int smallestDivisor(vector<int>& nums, int k) {
    int n = nums.size();
    int low =1;
    int high = *max_element(nums.begin(), nums.end());
    int res = high;
    while(low <= high) {
        int mid = low + (high-low)/2;
        int sum =0;
        for(int ele: nums){
            sum += (ele + mid-1)/mid;
        }
        if(sum<=k){
            res = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return res;
}