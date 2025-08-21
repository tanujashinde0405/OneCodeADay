#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a list of N words. Count the number of words that appear exactly twice in the list.

// Example 1:

// Input:
// N = 3
// list = {Geeks, For, Geeks}
// Output: 1
// Explanation: 'Geeks' is the only word that 
// appears twice. 

int countWords(string list[], int n) {
    unordered_map<string, int> freq;

    // Count frequency of each word
    for (int i=0;i<n;i++) {
        freq[list[i]]++;
    }

    int count = 0;
    // Count how many words appeared exactly twice
    for (auto &p : freq) {
        if (p.second == 2) {
            count++;
        }
    }
    return count;
}