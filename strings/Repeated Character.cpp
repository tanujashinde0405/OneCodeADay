#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.

// NOTE - If there are no repeating characters return '#'.

// Example 1:

// Input:
// S = "geeksforgeeks"
// Output: g
// Explanation: g, e, k and s are the repeating
// characters. Out of these, g occurs first. 

// time complexity: O(n)
// space complexity: O(1) because the size of the frequency array is constant (26 letters in the alphabet)
char firstRep(string s) {
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Find first character with freq > 1
    for (char c : s) {
        if (freq[c - 'a'] > 1)
            return c;
    }
    return '#';
}