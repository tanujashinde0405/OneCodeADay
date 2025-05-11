#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.

// Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

// Examples:

// Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
// Output: 1
// Explanation: Since, 1 is present more than 7/2 times, so it is the majority element.
// O(n), O(1)

int majorityElement(vector<int>& arr) {
    int n = arr.size();
    int candidate = -1;
    int count = 0;
    for(int num : arr){
        if(count == 0){
            candidate = num;
            count = 1;
        }
        else if(candidate == num)
            count++;
        else
            count--;
    }
    count =0;
    for(int num : arr){
        if(candidate == num)
            count++;
    }
    if(count > n/2)
        return candidate;
    else
        return -1;
}