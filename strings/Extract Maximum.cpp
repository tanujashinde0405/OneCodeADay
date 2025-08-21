#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a alphanumeric string S, extract maximum numeric value from S.

// Example 1:

// Input:
// S = 100klh564abc365bg
// Output: 564
// Explanation: Maximum numeric value 
// among 100, 564 and 365 is 564.

int extractMaximum(string S) {
    int maxNum = -1;
    int num = 0;
    bool inNumber = false;

    for (char c : S) {
        if (isdigit(c)) {
        // build the current number
            num = num * 10 + (c - '0');
            inNumber = true;
        } else {
            // we finished a number
            if (inNumber) {
                maxNum = max(maxNum, num);
                num = 0;
                inNumber = false;
            }
        }
    }   

    // check last number (if string ended with digits)
    if (inNumber) {
        maxNum = max(maxNum, num);
    }

    return maxNum;
}