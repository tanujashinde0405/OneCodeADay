#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// A valid parentheses string is either empty "", "(" + X + ")", or X + Y, where X and Y are valid parentheses strings, and + represents string concatenation.

// For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.

// A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = X + Y, with X and Y nonempty valid parentheses strings.

// Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

// Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

// Example 1:

// Input:
// s = "(()())(())"
// Output:
// "()()()"
// Explanation:
// The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
// After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

string removeOuter(string& s) {
    int openCount = 0;
    int closeCount = 0;
    string result = "";
    int start = 0;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(') {
            openCount++;
        } else if (c == ')') {
            closeCount++;
        }

        if (openCount == closeCount) {
            result += s.substr(start+1, i-start-1);
            start = i+1;
        }
    }
    return result;
}