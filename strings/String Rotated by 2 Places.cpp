#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given two strings s1 and s2. Return true if the string s2 can be obtained by rotating (in any direction) string s1 by exactly 2 places, otherwise, false.

// Note: Both rotations should be performed in same direction chosen initially.

// Examples:

// Input: s1 = "amazon", s2 = "azonam"
// Output: true
// Explanation: "amazon" can be rotated anti-clockwise by two places, which will make it as "azonam".

// time complexity: O(n)
// space complexity: O(1)
bool isRotated(string& s1, string& s2) {
    if (s1.length() != s2.length())
        return false;
    if(s1.length()<=2 || s2.length()<=2)
        return (s1==s2);
    int n = s1.length();
    bool clockwise = true, anticlockwise = true;
    
    for(int i=0;i<n;i++){
        if(s1[i] != s2[(i+2)%n]){
            clockwise = false;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s1[(i+2)%n] != s2[i]){
            anticlockwise = false;
            break;
        }
    }
    return clockwise or anticlockwise;
}