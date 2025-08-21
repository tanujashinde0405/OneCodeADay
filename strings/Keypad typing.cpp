#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given a n length string S of lowercase alphabet characters and the task is to find its matching decimal representation as on the shown keypad. Output the decimal representation corresponding to the string. For ex: if you are given amazon then its corresponding decimal representation will be 262966.
// Input:
// S = geeksforgeeks
// Output: 4335736743357
// Explanation:geeksforgeeks is 4335736743357
// in decimal when we type it using the given
// keypad.

string printNumber(string s, int n) {
    // mapping of characters to digits as per keypad
    vector<char> keypad(26);
    string keys[] = {"2", "2", "2",  // a,b,c
                     "3", "3", "3",  // d,e,f
                     "4", "4", "4",  // g,h,i
                     "5", "5", "5",  // j,k,l
                     "6", "6", "6",  // m,n,o
                     "7", "7", "7", "7", // p,q,r,s
                     "8", "8", "8",  // t,u,v
                     "9", "9", "9", "9"}; // w,x,y,z

    string result = "";
    for (char c : s) {
        result += keys[c - 'a'];
    }
    return result;
}
