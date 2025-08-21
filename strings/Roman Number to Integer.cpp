#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string s in Roman number format, your task is to convert it to an integer. Various symbols and their values are given below.
// Note: I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000

// Examples:

// Input: s = "IX"
// Output: 9
// Explanation: IX is a Roman symbol which represents 10 – 1 = 9.

int value(char r){
    if (r=='I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    return -1;
}
int romanToDecimal(string &s) {
    int res =0;
    
    for(int i=0;i<s.length();i++){
        int s1 = value(s[i]);
        
        if(i+1 < s.length()){
            int s2 = value(s[i+1]);
            
            if(s1>= s2){
                res += s1;
            } else {
                res += (s2-s1);
                i++;
            }
        } else {
            res +=s1;
        }
    }
    return res;
}