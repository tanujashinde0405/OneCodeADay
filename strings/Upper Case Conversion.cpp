#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a string s, convert the first letter of each word in the string to uppercase. 

// Examples:

// Input: s = "gEEKs"
// Output: "GEEKs"
// Input: s = "i love programming"
// Output: "I Love Programming"

string convert(string& s) {
    bool newWord = true;
    for (int i = 0; i < s.size(); i++) {
        if (isspace(s[i])) {
            newWord = true;
        } else if (newWord) {
            s[i] = toupper(s[i]);
            newWord = false;
        }
    }
    return s;
}