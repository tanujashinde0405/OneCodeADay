#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a string s. Your task is to remove the vowels from the string.

// Examples:

// Input: s = "welcome to geeksforgeeks"
// Output: "wlcm t gksfrgks"
// Explanation: Vowels were ignored only consonents were returned in the same order.

string removeVowels(string& s) {
    string result = "";
    string vowels = "aeiouAEIOU";
    for (char c : s) {
        if (vowels.find(c) == string::npos) { // not found in vowels
            result.push_back(c);
        }
    }
    return result;
}