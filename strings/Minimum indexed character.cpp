#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s1 and another string s2. Find the minimum index of the character in s1 that is also present in s2. if no character common in both then return -1.

// Examples :

// Input: s1 = "geeksforgeeks", s2 = "set"
// Output: 1
// Explanation: 'e' is the character which is present in given s1 "geeksforgeeks" and is also present in s2 "set". Minimum index of e is 1. 

// time complexity: O(n)
// space complexity: O(1)
int minIndexChar(string &s1, string &s2) {
    unordered_set<char> charsInS2(s2.begin(), s2.end()); // store chars of s2

    for (int i = 0; i < s1.size(); i++) {
        if (charsInS2.find(s1[i]) != charsInS2.end()) {
            return i; // first common character index
        }
    }
    return -1;
}