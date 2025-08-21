#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a string s. The task is to convert string characters to lowercase.

// Examples:

// Input: s = "ABCddE"
// Output: "abcdde"
// Explanation: A, B, C and E are converted to a, b, c and e thus all uppercase characters of the string converted to lowercase letter.

// time complexity: O(n)
// space complexity: O(1)
string toLower(string& s) {
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;  // convert to lowercase
        }
    }   
    return s;
}