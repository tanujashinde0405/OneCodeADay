#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s consisting of lowercase English Letters. return the first non-repeating character in s. If there is no non-repeating character, return '$'.

// Examples:

// Input: s = "geeksforgeeks"
// Output: 'f'
// Explanation: In the given string, 'f' is the first character in the string which does not repeat.

// time complexity: O(n)
// space complexity: O(1)
char nonRepeatingChar(string &s) {
    vector<int> freq(26,0);
    for(char c: s) {
        freq[c-'a']++;
    }
    
    for (char c : s) {
        if (freq[c - 'a'] == 1) {
            return c;
        }
    }
    return '$';
}