#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two sorted arrays arr1[] and arr2[]. Your task is to return the intersection of both arrays.
// Intersection of two arrays is said to be elements that are common in both arrays. The intersection should not count duplicate elements.
// Note: If there is no intersection then return an empty array.
// Examples:
// Input: arr1[] = [1, 2, 3, 4], arr2[] = [2, 4, 6, 7, 8]
// Output: [2, 4]
// Explanation: 2 and 4 are only common elements in both the arrays.


vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j< n2){
        
        if(i > 0 && arr1[i - 1] == arr1[i]) {
            i++;
            continue;
        }
        if(arr1[i]< arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
