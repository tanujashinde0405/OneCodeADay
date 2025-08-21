#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s. The task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of second occurrence is smallest. s contains only lowercase letters.

// Examples :

// Input: s ="geeksforgeeks"
// Output: "e"
// Explanation: 'e' repeats at third position.

// time complexity: O(n)
// space complexity: O(1) because the size of the frequency array is constant (26 letters in the alphabet)
string firstRepChar(string s) {
    vector<bool> seen(26, false);

    for (char c : s) {
        if (seen[c - 'a']) {
            return string(1, c); // return as string
        }
        seen[c - 'a'] = true;
    }

    return "-1";
}