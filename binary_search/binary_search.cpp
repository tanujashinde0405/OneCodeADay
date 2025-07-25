#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

// Time Complexity: O(log n)
// Space Complexity: O(1)
int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid]<target)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int result = search(nums, target);
    
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found." << endl;
    }
    
    return 0;
}