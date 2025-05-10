#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given an array arr[] having unique elements. Your task is to return the type of array.
// Note: The array can be categorized into ascending, descending, descending rotated and ascending rotated followed by:

// Return 1 if the array is in ascending order
// Return 2 if the array is in descending order
// Return 3 if the array is in descending rotated order
// Return 4 if the array is in ascending rotated order
// Examples:

// Input: arr[] = [2, 1, 5, 4, 3]
// Output: 3
// Explanation: Descending rotated, rotate 2 times left.
// O(n), O(1)
int maxNtype(vector<int>& arr) {
    int n = arr.size();
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }else{
            break;
        }
    }
    if(i==n-1){
        return 1;
    }
    if(i==0){
        for(i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
                continue;
            }else{
                break;
            }
        }
        if(i==n-1){
            return 2;
        }
        if(arr[0]<arr[i+1]){
            return 3;
        } else{
            return 4;
        }
    }
    if(i<n-1 && arr[0]> arr[i+1]){
        return 4;
    }
    return 3;
}