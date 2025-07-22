#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// A sorted array of distinct elements arr[] is rotated at some unknown point, the task is to find the minimum element in it. 

// Examples:

// Input: arr[] = [5, 6, 1, 2, 3, 4]
// Output: 1
// Explanation: 1 is the minimum element in the array.

// Time Complexity: O(log n)
// Space Complexity: O(1)
int findMin(vector<int>& nums) {
    int n = nums.size();
    int low = 0, high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[low]<= nums[mid]){
            ans = min(ans, nums[low]);
            low = mid+1;
        } else {
            high = mid-1;
            ans = min(ans, nums[mid]);
        }
    }
    return ans;
}