#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two strings, s1 and s2. The task is to remove all characters that are common in both strings and then combine the remaining characters from each string to form a new string. The characters that are not shared between the two strings should appear in the result in the same order as they appear in their respective original strings. If, after removing the common characters, no characters are left to form the result, return "-1"

// Examples:

// Input: s1 = aacdb, s2 = gafd
// Output: cbgf
// Explanation: The common characters of s1 and s2 are: a, d. The uncommon characters of s1 and s2 are c, b, g and f. Thus the modified string with uncommon characters concatenated is cbgf.

// time complexity: O(n)
// space complexity: O(1)
string concatenatedString(string s1, string s2) {
    vector<int>freq1(26,0);
    vector<int>freq2(26,0);
    for (char c : s1) freq1[c - 'a'] = 1;
    for (char c : s2) freq2[c - 'a'] = 1;

    string result = "";
    for (char c : s1) {
        if (!freq2[c - 'a']) result.push_back(c);
    }
    for (char c : s2) {
        if (!freq1[c - 'a']) result.push_back(c);
    }
    return result.empty() ? "-1" : result;
}