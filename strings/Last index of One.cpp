#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a string s consisting of only '0's and '1's,  find the last index of the '1' present.

// Note: If '1' is not present, return "-1"

// Examples:

// Input: s = 00001
// Output: 4
// Explanation: Last index of  1 in given string is 4.

// time complexity: O(n)
// space complexity: O(1)
int lastIndex(string s) {
    int len = s.size();
    for(int i=len-1;i>=0;i--){
        if(s[i]=='1')
            return i;
    }
    return -1;
}