#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] containing both positive and negative integers, the task is to find the length of the longest subarray with a sum equals to 0.

// Note: A subarray is a contiguous part of an array, formed by selecting one or more consecutive elements while maintaining their original order.

// Examples:

// Input: arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
// Output: 5
// Explanation: The longest subarray with sum equals to 0 is [-2, 2, -8, 1, 7].


int maxLength(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, int> firstSeen; 
    int prefixSum = 0;
    int maxLen = 0;

    firstSeen[0] = -1;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        if (firstSeen.find(prefixSum) != firstSeen.end()) {
            int prevIndex = firstSeen[prefixSum];
            int length = i - prevIndex;
            maxLen = max(maxLen, length);
        }
        else {
            firstSeen[prefixSum] = i;
        }
    }

    return maxLen;
}
int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << "Length of the longest subarray with sum equals to 0: " << maxLength(arr) << endl;
    return 0;
}