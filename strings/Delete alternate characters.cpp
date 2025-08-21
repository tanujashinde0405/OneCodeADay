#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s as input. Delete the characters at odd indices of the string. Return the final string after deletion of characters at odd indices.

// Examples :

// Input: s = "Geeks"
// Output: "Ges" 
// Explanation: Deleted "e" at index 1 and "k" at index 3.

string delAlternate(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0)  // keep only even indices
            result.push_back(s[i]);
    }
    return result;
}