#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Time Complexity : (log n)
// space complexity : O(1)
int search(vector<int>& nums, int k) {
    int n = nums.size();
    int low =0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] ==k) return mid;

        if(nums[low] <= nums[mid]){
            if(nums[low]<= k && k<= nums[mid]){
                high = mid-1;
            } else {
                low = mid+1;
            }
        } else {
            if(nums[mid]<= k && k <= nums[high]){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
    }
    return -1;
}


// in case of duplicate array elements
 bool searchII(vector<int>& nums, int k) {
    int n = nums.size();
    int low =0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] ==k) return true;
        if(nums[low] == nums[mid] && nums[mid] == nums[high]){
            low++, high--;
            continue;
        }
        if(nums[low] <= nums[mid]){
            if(nums[low]<= k && k<= nums[mid]){
                high = mid-1;
            } else {
                low = mid+1;
            }
        } else {
            if(nums[mid]<= k && k <= nums[high]){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
    }
    return false;
}