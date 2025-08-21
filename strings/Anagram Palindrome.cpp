#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string S, Check if characters of the given string can be rearranged to form a palindrome.
// Note: You have to return 1 if it is possible to convert the given string into palindrome else return 0. 

// Example 1:

// Input:
// S = "geeksogeeks"
// Output: Yes
// Explanation: The string can be converted
// into a palindrome: geeksoskeeg

int isPossible(string S) {
    int freq[26] = {0};
    
    for (char c : S) {
        freq[c - 'a']++;
    }
    
    int oddCount = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) oddCount++;
    }
    
    return oddCount <= 1 ? 1 : 0;
}