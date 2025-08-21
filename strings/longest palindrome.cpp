#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a string s, your task is to find the longest palindromic substring within s.

// A substring is a contiguous sequence of characters within a string, defined as s[i...j] where 0 ≤ i ≤ j < len(s).

// A palindrome is a string that reads the same forward and backward. More formally, s is a palindrome if reverse(s) == s.

// Note: If there are multiple palindromic substrings with the same length, return the first occurrence of the longest palindromic substring from left to right.

// Examples :

// Input: s = “forgeeksskeegfor” 
// Output: “geeksskeeg”
// Explanation: There are several possible palindromic substrings like “kssk”, “ss”, “eeksskee” etc. But the substring “geeksskeeg” is the longest among all.


// time complexity: O(n^2)
// space complexity: O(1)
// using expansion around center approach
string longestPalindrome(string &s) {
    int n = s.length();
    int maxLen = 1, start =0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=1;j++){
            int low = i;
            int high = i+j;
            
            while(low>=0 && high <n && s[low]==s[high]){
                int currLen = high -low + 1;
                if(currLen> maxLen){
                    start = low;
                    maxLen = currLen;
                }
                low--;
                high++;
            }
        }
    }
    return s.substr(start,maxLen);
}

// todo : manacher's algorithm