#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

// Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

// Examples:

// Input: arr = [-1, 0, 1, 2, -1, -4]
// Output: [[-1, 1]]
// Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
// arr[2] + arr[4] = 1 + (-1) = 0.
// The distinct pair are [-1,1].

vector<vector<int>> getPairs(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int low =0, high = n-1;
    vector<vector<int>> res;
    while(low < high) {
        int sum = arr[low] + arr[high];
        if(sum == 0){
            res.push_back({arr[low], arr[high]});
            while(low<high && arr[low]==arr[low+1])
                low++;
            while(low<high && arr[high]==arr[high-1])
                high--;
            low++, high--;   
        }
        else if(sum < 0)
            low++;
        else
            high--;
    }
    return res;
}