#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Intersection of Two arrays with Duplicate Elements
// Difficulty: EasyAccuracy: 61.4%Submissions: 34K+Points: 2Average Time: 20m
// Given two integer arrays a[] and b[], you have to find the intersection of the two arrays. Intersection of two arrays is said to be elements that are common in both arrays. The intersection should not have duplicate elements and the result should contain items in any order.

// Note: The driver code will sort the resulting array in increasing order before printing.

// Examples:

// Input: a[] = [1, 2, 1, 3, 1], b[] = [3, 1, 3, 4, 1]
// Output: [1, 3]
// Explanation: 1 and 3 are the only common elements and we need to print only one occurrence of common elements.

vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
    unordered_set<int> sa(a.begin(), a.end());  
    vector<int> res;                            
    for (int i = 0; i < b.size(); i++) {
        if (sa.find(b[i]) != sa.end()) {
            res.push_back(b[i]); 
            sa.erase(b[i]);  
        }
    }
    return res;
}
