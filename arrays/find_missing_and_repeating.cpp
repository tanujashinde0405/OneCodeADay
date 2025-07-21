#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

// Examples:

// Input: arr[] = [2, 2]
// Output: [2, 1]
// Explanation: Repeating number is 2 and the missing number is 1.
// Input: arr[] = [1, 3, 3] 
// Output: [3, 2]
// Explanation: Repeating number is 3 and the missing number is 2.

// Time Complexity: O(n)
// Space Complexity: O(n)
vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> freq(n+1, 0);
    
    int missing = -1;
    int repeating = -1;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    
    for(int i=1;i<=n;i++){
        if(freq[i] == 0) missing = i;
        else if (freq[i] == 2) repeating = i;
    }
    return {repeating, missing};
}

// Time Complexity: O(n)
// Space Complexity: O(1)
vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    int repeating = -1;
    int missing = -1;
    for(int i=0;i<n;i++) {
        int val = abs(arr[i]);
        
        if(arr[val-1]> 0){
            arr[val-1] = -arr[val-1];
        }else {
            repeating = val;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]> 0){
            missing = i+1;
            break;
        }
    }
    return {repeating, missing};
}

// Time Complexity: O(n)
// Space Complexity: O(1)
vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    
    int s = (n* (n+1))/2;
    int ssq = (n*(n+1) * (2*n+1))/6;
    for(int i=0;i<n;i++){
        s-=arr[i];
        ssq -= arr[i]*arr[i];
    }
    int missing = (s+ ssq/s)/2;
    int repeating = missing - s;
    return {repeating, missing};
}