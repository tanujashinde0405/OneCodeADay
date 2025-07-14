#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] of non-negative integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

// Examples:

// Input: arr[] = [2, 6, 1, 9, 4, 5, 3]
// Output: 6
// Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.
// time complexity O(n), space completexity O(n)

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> st;
    int res =0;
    for(int val: nums){
        st.insert(val);
    }

    for(int val: nums){
        if(st.find(val)!= st.end() && st.find(val-1)==st.end()){
            int curr= val, cnt=0;
            while(st.find(curr)!=st.end()){
                st.erase(curr);
                curr++;
                cnt++;
            }
            res = max(res, cnt);
        }
    }
    return res;
}