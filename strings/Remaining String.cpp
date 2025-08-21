#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s without spaces, a character ch and an integer count. Your task is to return the substring that remains after the character ch has appeared count number of times.
// Note:  Assume upper case and lower case alphabets are different. “”(Empty string) should be returned if it is not possible, or the remaining substring is empty.

// Examples:

// Input: s = "Thisisdemostring", ch = 'i', count = 3
// Output: ng
// Explanation: The remaining substring of s after the 3rd
// occurrence of 'i' is "ng", hence the output is ng.

// time complexity: O(n)
// space complexity: O(1)
string printString(string s, char ch, int count) {
    int occurrence = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ch) {
            occurrence++;
            if (occurrence == count) {
                if (i + 1 < s.size())
                    return s.substr(i + 1); 
                else
                    return "";
            }
        }
    }
    return "";
}