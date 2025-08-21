#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// A string s is given to represent a positive number. The task is to round str to the nearest multiple of 10.  If you have two multiples equally apart from s, choose the smallest element among them.

// Examples:

// Input: s = "29" 
// Output: 30
// Explanation: Close multiples are 20 and 30, and 30 is the nearest to 29. 

string roundToNearest(string& s) {
    int n = s.size();
    char lastDigit = s[n - 1];

    if (lastDigit < '5') {
        s[n - 1] = '0';  // round down
    } else if (lastDigit > '5') {
        s[n - 1] = '0';
        int i = n - 2;
        // carry propagate
        while (i >= 0 && s[i] == '9') {
            s[i] = '0';
            i--;
        }
        if (i >= 0) {
            s[i] += 1;
        } else {
            s = "1" + s;  // case like 999 -> 1000
        }
    } else { 
        // exactly '5' → round down (set to 0)
        s[n - 1] = '0';
    }

    return s;
}