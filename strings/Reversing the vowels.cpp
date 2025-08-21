#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a string consisting of lowercase English alphabets, reverse only the vowels present in it and print the resulting string.

// Examples:

// Input: s = "geeksforgeeks"
// Output: "geeksforgeeks"
// Explanation: The vowels are: e, e, o, e, e. Reverse of these is also e, e, o, e, e.

// time complexity: O(n)
// space complexity: O(1)
bool isVowel(char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
string modify(string& s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        while (i < j && !isVowel(s[i])) i++;
        while (i < j && !isVowel(s[j])) j--;
        if (i < j) {
            swap(s[i], s[j]);
            i++, j--;
        }
    }
    return s;
}