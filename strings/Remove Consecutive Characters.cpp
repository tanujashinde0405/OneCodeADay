#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given a string s, consisting of lowercase alphabets. Your task is to remove consecutive duplicate characters from the string. 

// Example:

// Input: s = "aabb"
// Output:  "ab" 
// Explanation: 
// The character 'a' at index 2 is the same as 'a' at index 1, so it is removed.
// Similarly, the character 'b' at index 4 is the same as 'b' at index 3, so it is removed.
// The final string is "ab".

// time complexity: O(n)
// space complexity: O(n) for the result string
string removeConsecutiveCharacter(string& s) {
    string result;
    result.push_back(s[0]); // always keep the first character

    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {  
            result.push_back(s[i]);
        }
    }
    return result;
}