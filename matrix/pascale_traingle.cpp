#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for(int row = 1; row<=numRows; row++){
        int c=1;
        vector<int> arr;
        for(int i=1;i<=row;i++){
            arr.push_back(c);
            c = c* (row-i)/i;
        }
        ans.push_back(arr);
    }
    return ans;
}