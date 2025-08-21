#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string consisting of lowercase letters, arrange all its letters in ascending order. 

// Example 1:

// Input:
// S = "edcab"
// Output: "abcde"
// Explanation: characters are in ascending
// order in "abcde".

string sort(string S) {
    vector<int> freq(26, 0);
    for(char c : S) freq[c - 'a']++;
    
    string result = "";
    for(int i = 0; i < 26; i++) {
        result.append(freq[i], char('a' + i));
    }
    return result;
}