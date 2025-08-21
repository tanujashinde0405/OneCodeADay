#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two strings A and B, find if A is a subsequence of B.

// Example 1:

// Input:
// A = AXY 
// B = YADXCP
// Output: 0 
// Explanation: A is not a subsequence of B
// as 'Y' appears before 'A'.

// time complexity : O(n)
// space complexity: O(1)
bool isSubSequence(string A, string B) {
    int i = 0, j = 0;
    while (i < A.size() && j < B.size()) {
        if (A[i] == B[j]) i++;
        j++;
    }
    return (i == A.size());
}