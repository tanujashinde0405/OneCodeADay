#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given a string s , the task is to reverse the string using stack.

// Examples:

// Input: s ="GeeksforGeeks"
// Output:  skeeGrofskee

string reverse(const string& s) {
    stack<char> st;
    string res ="";
    
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}