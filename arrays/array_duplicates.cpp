#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr of integers, find all the elements that occur more than once in the array. If no element repeats, return an empty array.

// Examples:

// Input: arr[] = [2, 3, 1, 2, 3]
// Output: [2, 3] 
// Explanation: 2 and 3 occur more than once in the given array.
// O(n), O(n)
vector<int> findDuplicates(vector<int>& arr) {
    unordered_map<int, int> mp;
    vector<int> ans;
    int n = arr.size();
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    for(int i=0;i<n;i++){
        if(mp[i]>1)
            ans.push_back(i);
    }
    return ans;
}