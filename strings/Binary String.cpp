#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a binary string s. You have to count the number of substrings that start and end with 1.

// Examples:

// Input: s = "1111"
// Output: 6
// Explanation: There are 6 substrings from the given string. They are "11", "11", "11", "111", "111", "1111".

// time complexity: O(n)
// space complexity: O(1)
int binarySubstring(string& s) {
    int countOnes = 0;
    for (char c : s) {
        if (c == '1') countOnes++;
    }
    return (countOnes * (countOnes - 1)) / 2;
}