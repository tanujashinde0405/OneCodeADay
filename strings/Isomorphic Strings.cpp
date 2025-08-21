#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two strings s1 and s2 consisting of only lowercase English letters and of equal length, check if these two strings are isomorphic to each other.
// If the characters in s1 can be changed to get s2, then two strings, s1 and s2 are isomorphic. A character must be completely swapped out for another character while maintaining the order of the characters. A character may map to itself, but no two characters may map to the same character.

// Examples:

// Input: s1 = "aab", s2 = "xxy"
// Output: true
// Explanation: Each character in s1 can be consistently mapped to a unique character in s2 (a → x, b → y).

// time complexity: O(n)
// space complexity: O(1) since the number of characters is fixed (26 lowercase letters).
bool areIsomorphic(string &s1, string &s2) {
    unordered_map<char,int> m1,m2;
    
    for(int i=0;i<s1.length();i++){
        if(m1.find(s1[i]) == m1.end())
            m1[s1[i]] = i;
        if(m2.find(s2[i]) == m2.end())
            m2[s2[i]] = i;
            
        if(m1[s1[i]] != m2[s2[i]])
            return false;
    }
    return true;
}