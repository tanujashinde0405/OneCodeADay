#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.

// Note: No two strings are the second most repeated, there will be always a single string.

// Example 1:

// Input:
// N = 6
// arr[] = {aaa, bbb, ccc, bbb, aaa, aaa}
// Output: bbb
// Explanation: "bbb" is the second most 
// occurring string with frequency 2.

// time complexity: O(n)
// space complexity: O(n)
string secFrequent(string arr[], int n) {
    unordered_map<string, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int first = INT_MIN, second = INT_MIN;
    string firstStr, secondStr;

    // Find first and second max
    for (auto &entry : freq) {
        int count = entry.second;
        string word = entry.first;

        if (count > first) {
            second = first;
            secondStr = firstStr;

            first = count;
            firstStr = word;
        } else if (count > second && count < first) {
            second = count;
            secondStr = word;
        }
    }

    return secondStr;
}