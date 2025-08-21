#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character of S2 and so on till the strings end.
// NOTE: Add the whole string if other string is empty.

// Example 1:

// Input:
// S1 = "Hello" S2 = "Bye"
// Output: HBeylelo
// Explanation: The characters of both the 
// given strings are arranged alternatlively.

string merge(string S1, string S2) {
    string result = "";
    int i = 0, j = 0;
    int n1 = S1.size(), n2 = S2.size();

    while (i < n1 || j < n2) {
        if (i < n1) result.push_back(S1[i++]);
        if (j < n2) result.push_back(S2[j++]);
    }
    return result;
}