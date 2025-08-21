#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a non-empty sequence of characters s, return true if sequence is Binary, else return false.

// Examples:

// Input: s = "101"
// Output: true
// Explanation: Since string contains only '0' and '1', output is true.

// time complexity: O(n)
// space complexity: O(1)
bool isBinary(string& s) {
    for(int i=0;i<s.length();i++){
        if(!(s[i]=='0'||s[i]=='1')){
            return false;
        }
    }
    return true;
}