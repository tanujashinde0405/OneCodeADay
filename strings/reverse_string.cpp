#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given a string s, and your task is to reverse the string.

// Examples:

// Input: s = "Geeks"
// Output: "skeeG"
// Input: s = "for"
// Output: "rof"

string reverseString(string& s) {
    int i=0;
    int j = s.size()-1;
    while(i<=j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}