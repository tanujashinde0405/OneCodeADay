#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s which may contain lowercase and uppercase characters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string.

// Example 1:

// Input: s = "geEksforGEeks"
// Output: "geEksforG"
// Explanation: After removing duplicate characters such as E, e, k, s, we have string as "geEksforG".

string removeDuplicates(string &s) {
    vector<int> ch(128,0);
    string ans = "";
    for(char c: s){
        if(ch[c]==0){
            ans.push_back(c);
            ch[c]++;
        }
    }
    return ans;
}