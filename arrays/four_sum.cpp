#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] of integers and another integer target. Find all unique quadruples from the given array that sums up to target.

// Note: All the quadruples should be internally sorted, ie for any quadruple [q1, q2, q3, q4] it should be : q1 <= q2 <= q3 <= q4.

// Examples :

// Input: arr[] = [0, 0, 2, 1, 1], target = 3
// Output: [0, 0, 1, 2] 
// Explanation: Sum of 0, 0, 1, 2 is equal to 3.
// Input: arr[] = [10, 2, 3, 4, 5, 7, 8], target = 23
// Output: [[2, 3, 8, 10], [2, 4, 7, 10], [3, 5, 7, 8]] 
// Explanation: Sum of 2, 3, 8, 10 is 23, sum of 2, 4, 7, 10 is 23 and sum of 3, 5, 7, 8 is also 23.

// Approach where we can sort the array and then use two pointers to find the quadruples that sum to target
// Time complexity: O(n^3)
// space complexity: O(1) (ignoring the output space)
vector<vector<int> > fourSum(vector<int> &nums, int target) {
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1;j<n;j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            
            int k = j+1;
            int l = n-1;
            while(k<l){
                long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
                if (sum == target){
                    res.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                } else if(sum < target){
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
    return res;
}

// Approach where we can use a hash map to find the quadruples that sum to target
// Time complexity: O(n^2)
// space complexity: O(n) (for the hash map)
vector<vector<int>> fourSum(vector<int>& arr, int target) {
    int n = arr.size();
    
    // Ideally we should us an unordered_set here, but C++
    // does not support vector as a key in an unordered_set
    // So we have used set to keep the code simple. However
    // set internally uses Red Black Tree and has O(Log n)
    // time complexities for operations
    set<vector<int>> resSet;

    // Generate all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            unordered_set<int> s;
            for (int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                int last = target - sum;
                if (s.find(last) != s.end()) {
                    vector<int> curr = {arr[i], arr[j], arr[k], last};
                    sort(curr.begin(), curr.end());
                    resSet.insert(curr);
                }
                s.insert(arr[k]);
            }
        }
    }

    return vector<vector<int>>(resSet.begin(), resSet.end());
}