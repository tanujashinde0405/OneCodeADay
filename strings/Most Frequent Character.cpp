#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

// Examples:

// Input: s = "testsample"
// Output: 'e'
// Explanation: 'e' is the character which is having the highest frequency.

// time complexity: O(n)
// space complexity: O(1) since the number of characters is fixed (26 lowercase letters).
char getMaxOccuringChar(string& s) {
    vector<int> freq(26, 0);

    for(char c : s) {
        freq[c - 'a']++;
    }

    int maxFreq = -1;
    char ans = 'a';
    for(int i = 0; i < 26; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = 'a' + i;
        }
    }
    return ans;
}