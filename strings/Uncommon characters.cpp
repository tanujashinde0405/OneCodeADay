#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given two strings s1 and s2. Your task is to identify the characters that appear in either string but not in both (i.e., characters that are unique to one of the strings). Return the result as a sorted string.

// Examples:

// Input: s1 = "geeksforgeeks", s2 = "geeksquiz"
// Output: "fioqruz"
// Explanation: The characters 'f', 'i', 'o', 'q', 'r', 'u', and 'z' are present in either s1 or s2, but not in both.


string uncommonChars(string& s1, string& s2) {
    vector<int> freq1(26,0);
    vector<int> freq2(26,0);
    
    for(char& c: s1) freq1[c-'a'] = 1;
    for(char& c: s2) freq2[c-'a'] = 1;
    
    string result = "";
    for(int i=0;i<26;i++){
        if(freq1[i]^freq2[i] == 1)
            result.push_back('a'+i);
    }
    return result;
}