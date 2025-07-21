#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Time Complexity: O(log n)
// SPace Complexity: O(1)
int searchInsert(vector<int>& Arr, int k) {
    int N = Arr.size();
    int left = 0, right = N-1;
    while(left <= right){
        int mid = (left+right)/2;
        if(Arr[mid]== k)
            return mid;
        else if(Arr[mid] > k)
            right = mid-1;
        else
            left = mid+1;
    }
    return left;
}