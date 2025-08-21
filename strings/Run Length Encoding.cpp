#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s, Your task is to complete the function encode that returns the run length encoded string for the given string.
// eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
// You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.

// Example 1:

// Input:
// s = aaaabbbccc
// Output: a4b3c3
// Explanation: a repeated 4 times consecutively b 3 times, c also 3 times

// time complexity: O(n)
// space complexity: O(1)
string encode(string s) {
    string result = "";
    int n = s.size();

    for (int i = 0; i < n; i++) {
        int count = 1;

    // count consecutive repeating characters
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        result += s[i];              // add the character
        result += to_string(count);  // add the count
    }

    return result;
    
}