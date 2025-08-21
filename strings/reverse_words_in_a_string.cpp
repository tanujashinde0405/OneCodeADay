#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s, reverse the string without reversing its individual words. Words are separated by dots(.).

// Note: The string may contain leading or trailing dots(.) or multiple dots(.) between two words. The returned string should only have a single dot(.) separating the words, and no extra dots should be included.

// Examples :

// Input: s = "i.like.this.program.very.much"
// Output: "much.very.program.this.like.i"
// Explanation: The words in the input string are reversed while maintaining the dots as separators, resulting in "much.very.program.this.like.i".


// using stack
// time complexity: O(n)
// space complexity: O(n)
string reverseWords(string &s) {
    stack<string> st;
    string result = "";
    for(int i=0;i<s.length();i++){
        if(s[i] !='.'){
            result += s[i];
        }
        else if(!result.empty()){
            st.push(result);
            result = "";
        }
    }
    if(!result.empty()){
        st.push(result);
    }
    result = "";
    
    while(!st.empty()){
        result += st.top();
        st.pop();
        if(!st.empty()){
            result += ".";
        }
    }
    return result;
}

// without using stack
string reverseWords(string &s) {
    reverse(s.begin(), s.end());
    int n = s.length();
    int i=0;
    for(int l=0;l<n;l++){
        if(s[l] != '.'){
            if(i!=0) s[i++] = '.';
            
            int r = l;
            while(r<n && s[r]!= '.') s[i++]=s[r++];
            
            reverse(s.begin()+i-(r-l), s.begin()+i);
            l= r;
        }
    }
    s.erase(s.begin() + i, s.end());
    return s;
}