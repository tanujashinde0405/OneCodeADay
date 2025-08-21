#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given two strings txt and pat, return the 0-based index of the first occurrence of the substring pat in txt. If pat is not found, return -1.
// Note: You are not allowed to use the inbuilt function.

// Examples :

// Input: txt = "GeeksForGeeks", pat = "Fr"
// Output: -1
// Explanation: "Fr" is not present in the string "GeeksForGeeks" as substring.

// time complexity: O(n*m)
// space complexity: O(1)
int firstOccurence(string& txt, string& pat) {
    for(int i=0;i<txt.length();i++){
        int flag = 1;
        string st = "";
        int k =i;
        for(int j=0;j<pat.length();j++){
            if(txt[k]==pat[j]){
                st= st+txt[k];
                k++;
            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag ==1){
            return i;
        }
    }
    return -1;
}