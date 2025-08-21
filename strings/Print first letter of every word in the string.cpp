#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string S, the task is to create a string with the first letter of every word in the string.
// Example 1:

// Input: 
// S = "geeks for geeks"
// Output: gfg

string firstAlphabet(string S) {
    bool newWord = true;
    string res = "";
    for (int i = 0; i < S.size(); i++) {
        if (isspace(S[i])) {
            newWord = true;
        } else if (newWord) {
            res += S[i];
            newWord = false;
        }
    }
    return res;
}