#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

// Note:- The position you return should be according to 1-based indexing. 

// Examples:

// Input: arr[] = [1, 5, 3, 4, 3, 5, 6]
// Output: 2
// Explanation: 5 appears twice and its first appearance is at index 2 which is less than 3 whose first the occurring index is 3.
int firstRepeated(vector<int> &arr) {
    unordered_map<int, int> mp;
    int n = arr.size();
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>1)
            return i+1;
    }
    return -1;
}