#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.

// approach where we can sort the array and then use two pointers to find the triplets that sum to zero
// time complexity: O(n^2)
// space complexity: O(1) (ignoring the output space)
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum<0)
                j++;
            else if(sum >0)
                k--;
            else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
        }
    }
    return ans;
}

// approach where we can use a hash map to find the triplets that sum to zero
// time complexity: O(n^2)
// space complexity: O(n) (for the hash map)
vector<vector<int>> findTriplets(vector<int> &arr) {
    vector<vector<int>> ans;
    int n = arr.size();
    unordered_map<int, vector<int>> map;

    for (int j=0; j<arr.size(); j++) {
        for (int k=j+1; k<arr.size(); k++) {
            int val = -1*(arr[j]+arr[k]);
            if (map.find(val)!=map.end()) {
            
                for (auto i: map[val]) {
                    ans.push_back({i, j, k});
                }
            }
        }
        map[arr[j]].push_back(j);
    }
    return ans;
}