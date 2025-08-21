#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s without spaces, the task is to remove all duplicate characters from it, keeping only the first occurrence.

// Note: The original order of characters must be kept the same. 

// Examples :

// Input: s = "zvvo"
// Output: "zvo"
// Explanation: Only keep the first occurrence

// time complexity: O(n)
// space complexity: O(1) since the number of characters is fixed (256 ASCII characters).
string removeDups(string &s) {
    vector<int> ch(256,0);
    string ans = "";
    for(char c: s){
        if(ch[c]==0){
            ans.push_back(c);
            ch[c]++;
        }
    }
    return ans;
}