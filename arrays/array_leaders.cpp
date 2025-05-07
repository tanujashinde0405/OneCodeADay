#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

// Examples:

// Input: arr = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 2]
// Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
// O(n), O(1)
vector<int> leaders(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    int max = arr[n-1];
    ans.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(max<=arr[i]){
            max= arr[i];
            ans.push_back(max);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}