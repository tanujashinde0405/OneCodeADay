#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string, check if all its characters are the same or not.

// Example 1:

// Input:
// s = "geeks"
// Output: False
// Explanation: The string contains different
// character 'g', 'e', 'k' and 's'.

bool check(string s) {
    for (char c : s) {
        if (c != s[0]) return false;
    }
    return true;
}