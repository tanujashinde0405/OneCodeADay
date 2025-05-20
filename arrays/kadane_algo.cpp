#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an integer array arr[]. You need to find the maximum sum of a subarray.

// Examples:

// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: We can solve this problem using Kadane's algorithm. The idea is to iterate through the array and keep track of the maximum sum of the subarray ending at each index. We can do this by maintaining two variables: maxending and res. maxending keeps track of the maximum sum of the subarray ending at the current index, and res keeps track of the overall maximum sum found so far.
// If the maximum sum of the subarray ending at the current index is less than the current element, we start a new subarray from the current element. Otherwise, we add the current element to the maximum sum of the subarray ending at the previous index. We also update res with the maximum of res and maxending.
// Finally, we return res as the maximum sum of the subarray.

int maxSubarraySum(vector<int> &nums) {
    int res = nums[0];
    int maxending = nums[0];

    for(int i=1;i<nums.size();i++){
        maxending = max(maxending+nums[i], nums[i]);
        res = max(res, maxending);
    }
    return res;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << "Maximum subarray sum is: " << maxSubarraySum(arr) << endl;
    return 0;
}
