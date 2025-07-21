#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//floor
// Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1.

// Note: In case of multiple occurrences of ceil of x, return the index of the last occurrence.

// Examples

// Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
// Output: 1
// Explanation: Largest number less than or equal to 5 is 2, whose index is 1.
//ceil
// Given a sorted array arr[] and an integer x, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x. This element is called the ceil of x. If such an element does not exist, return -1.

// Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

// Examples

// Input: arr[] = [1, 2, 8, 10, 11, 12, 19], x = 5
// Output: 2
// Explanation: Smallest number greater than 5 is 8, whose index is 2.

int findFloor(vector<int>& arr, int x) {
    int n = arr.size();
    int low =0, high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] <= x){
            ans = mid;
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return ans;
}

int findCeil(vector<int>& arr, int x) {
    int n = arr.size();
    int low =0, high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return ans;
}