#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

 

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Time complexity: O(n)
// Space complexity: O(1)

vector<int> findDuplicates(vector<int>& nums) {
    if(nums.empty())return {};
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        if(nums[abs(nums[i])-1]<0)
            ans.push_back(abs(nums[i]));
        nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
    }
    return ans;
}
int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = findDuplicates(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}