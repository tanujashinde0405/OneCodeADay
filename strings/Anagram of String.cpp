#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two strings s1 and s2 in lowercase, the task is to make them anagrams. The only allowed operation is to remove a character from any string. Find the minimum number of characters to be deleted to make both the strings anagram. Two strings are called anagrams of each other if one of them can be converted into another by rearranging its letters.

// Examples:

// Input: s1 = "bcadeh", s2 = "hea"
// Output: 3
// Explanation: We need to remove b, c and d from s1

// time complexity: O(n)
// space complexity: O(1)
int remAnagram(string s1, string s2) {
    vector<int> freq(26, 0);
    for (char c : s1) freq[c - 'a']++;
    for (char c : s2) freq[c - 'a']--;
    int deletions = 0;
    for (int x : freq) deletions += abs(x);
    return deletions;
}