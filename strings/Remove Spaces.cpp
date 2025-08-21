#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s. Your task is to remove spaces from it. 

// Examples:

// Input: s = "geeks  for geeks"
// Output: "geeksforgeeks"
// Explanation: All the spaces have been removed.

// time complexity: O(n)
// space complexity: O(1)
string modify(string& s) {
    string result;
    for (char c : s) {
        if (c != ' ') {
            result.push_back(c);
        }
    }
    return result;
}