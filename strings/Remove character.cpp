#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two strings str1 and str2, remove those characters from the first string(str1) which are present in the second string(str2). Both the strings are different and contain only lowercase characters.
// NOTE: Size of the first string is always greater than the size of the second string( |str1| > |str2|).
 

// Example 1:

// Input: str1 = "computer", str2= "cat"
// Output: "ompuer"
// Explanation: After removing characters(c, a, t) from string1 we get "ompuer".

// time complexity: O(n)
// space complexity: O(1)
string removeChars(string str1, string str2) {
    bool present[26] = {false};

    for (char c : str2)
        present[c - 'a'] = true;

    string result = "";
    for (char c : str1) {
        if (!present[c - 'a']) {
            result += c;
        }
    }
    return result;
}