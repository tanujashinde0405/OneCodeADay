#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a sorted array arr with possibly some duplicates, the task is to find the first and last occurrences of an element x in the given array.
// Note: If the number x is not found in the array then return both the indices as -1.

// Examples:

// Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5
// Output: [2, 5]
// Explanation: First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5
// O(n), O(1)
vector<int> find(vector<int>& arr, int x) {
    vector<int> ans;
    int first=-1;
    int last=-1;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]!=x)
            continue;
        if(first ==-1)
            first = i;
        last=i;
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}