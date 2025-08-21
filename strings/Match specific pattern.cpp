#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a dictionary of words and a pattern. Every character in the pattern is uniquely mapped to a character in the dictionary. Find all such words in the dictionary that match the given pattern. 

// Examples :

// Input: n = 4, dict[] = {abb,abc,xyz,xyy}, pattern  = foo
// Output: abb xyy
// Explanation: xyy and abb have the same character at index 1 and 2 like the pattern.

string encodePattern(string word) {
    unordered_map<char, int> mp;
    string result = "";
    int code = 0;

    for (char c : word) {
        if (mp.find(c) == mp.end()) {
            mp[c] = code++;
        }
        result += to_string(mp[c]);
    }
    return result;
}
vector<string> findMatchedWords(int n, vector<string> dict, string pattern) {
    vector<string> result;
    string patternCode = encodePattern(pattern);

    for (string word : dict) {
        if (word.size() == pattern.size() && encodePattern(word) == patternCode) {
            result.push_back(word);
        }
    }
    return result;
}