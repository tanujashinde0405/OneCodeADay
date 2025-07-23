#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] of n weights. Find the least weight capacity of a boat to ship all weights within d days.
// The ith weight has a weight of arr[i]. Each day, we load the boat with weights given by arr[i].We may not load more weight than the maximum weight capacity of the ship.

// Note: You have to load weights on the boat in the given order.

 

// Example 1:

// Input:
// n = 3
// arr[] = {1, 2, 1}
// d = 2
// Output:
// 3
// Explanation:
// We can ship the weights in 2 days
// in the following way:-
// Day 1- 1,2
// Day 2- 1

// Time Complexity: O(n * log(sum(arr)))
// Space Complexity: O(1)
int findDays(int arr[], int capacity, int n) {
    int dayCnt =1, load = 0;
    for(int i=0;i<n;i++){
        if(load + arr[i] > capacity){
            dayCnt ++;
            load = arr[i];
        } else {
            load += arr[i];
        }
    }
    return dayCnt;
}
int leastWeightCapacity(int arr[], int n, int d) {
    int low =-1, high = 0;
    for(int i=0;i<n;i++){
        high += arr[i];
        low = max(low, arr[i]);
    }
    
    while(low<= high){
        int mid = (low+high)/2;
        int numOfDays = findDays(arr, mid, n);
        if(numOfDays <= d){
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return low;
}