#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two non-empty strings s1 and s2, consisting only of lowercase English letters, determine whether they are anagrams of each other or not.
// Two strings are considered anagrams if they contain the same characters with exactly the same frequencies, regardless of their order.

// Examples:

// Input: s1 = "geeks" s2 = "kseeg"
// Output: true 
// Explanation: Both the string have same characters with same frequency. So, they are anagrams.

bool areAnagrams(string& s1, string& s2) {
    if(s1.length() != s2.length()) return false;
    vector<int> freq1(26,0);
    vector<int> freq2(26,0);
    for(char& c: s1) freq1[c-'a']++;
    for(char& c: s2) freq2[c-'a']++;
    
    for(int i=0;i<26;i++){
        if (freq1[i] != freq2[i])
            return false;
    }
    return true;
}