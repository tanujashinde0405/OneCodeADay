#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string S. Count the characters that have ‘N’ number of occurrences. If a character appears consecutively it is counted as 1 occurrence.

// Example 1:

// Input:
// S = "abc", N = 1
// Output: 3
// Explanation: 'a', 'b' and 'c' all have 
// 1 occurrence.

int getCount(string S, int N) {
    // Step 1: Remove consecutive duplicates
    string reduced = "";
    reduced += S[0];
    for (int i = 1; i < S.size(); i++) {
        if (S[i] != S[i - 1]) {
            reduced += S[i];
        }
    }

    // Step 2: Count frequency of characters in reduced string
    unordered_map<char, int> freq;
    for (char c : reduced) {
        freq[c]++;
    }

    // Step 3: Count characters with exactly N occurrences
    int count = 0;
    for (auto &p : freq) {
        if (p.second == N) {
            count++;
        }
    }

    return count;
}