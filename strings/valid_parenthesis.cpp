#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']', verify the validity of the arrangement.
// An input string is valid if:

//          1. Open brackets must be closed by the same type of brackets.
//          2. Open brackets must be closed in the correct order.

// Examples :

// Input: s = "[{()}]"
// Output: true
// Explanation: All the brackets are well-formed.

bool isBalanced(string& s) {
    int len = s.length();
    stack<char> st;
    for(int i=0;i<len;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        } else if (s[i] == ')' || s[i]==']' || s[i]=='}'){
            
            if (st.empty()) return false;
            char top = st.top();
            if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '[')) {
                    return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

bool isBalanced(string& s) {
    int len = s.length();
    int top = -1;
    for(int i=0;i<len;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            s[++top]= s[i];
        } else if (s[i] == ')' || s[i]==']' || s[i]=='}'){
            if (top == -1) return false;
            if ((s[i] == ')' && s[top] != '(') ||
                (s[i] == '}' && s[top] != '{') ||
                (s[i] == ']' && s[top] != '[')) {
                    return false;
            }
            top--;
        }
    }
    return top==-1;
}