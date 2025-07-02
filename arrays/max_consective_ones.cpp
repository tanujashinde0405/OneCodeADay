#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0;
    int maxi = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
            maxi = max(cnt, maxi);
        }
        if(nums[i]==0){
            cnt=0;
        }
    }
    return maxi;
}