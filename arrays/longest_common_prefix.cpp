#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "".

// Examples :

// Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
// Output: "gee"
// Explanation: "gee" is the longest common prefix in all the given strings.

string longestCommonPrefix(vector<string> arr) {
    sort(arr.begin(), arr.end());
    string first = arr.front();
    string last = arr.back();
    int minLength = min(first.size(), last.size());

    int i = 0;
    while (i < minLength && first[i] == last[i]) {
        i++;
    }

    return first.substr(0, i);
}