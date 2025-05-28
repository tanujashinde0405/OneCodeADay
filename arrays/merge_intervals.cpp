#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array of Intervals arr[][], where arr[i] = [starti, endi]. The task is to merge all of the overlapping Intervals.

// Examples:

// Input: arr[][] = [[1,3],[2,4],[6,8],[9,10]]
// Output: [[1,4], [6,8], [9,10]]
// Explanation: In the given intervals we have only two overlapping intervals here, [1,3] and [2,4] which on merging will become [1,4]. Therefore we will return [[1,4], [6,8], [9,10]].
// Time complexity: O(n log n) due to sorting
// Space complexity: O(n) for storing the result

vector<vector<int>> mergeOverlap(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    if (intervals.empty()) return ans;
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    ans.push_back(intervals[0]); 
    for(int i=1;i<n;i++){
        if(intervals[i][0]<=ans.back()[1])
            ans.back()[1] = max(intervals[i][1], ans.back()[1]);
        else{
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> result = mergeOverlap(intervals);
    
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    return 0;
}
