#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array of n names arr of candidates in an election, where each name is a string of lowercase characters. A candidate name in the array represents a vote casted to the candidate. Print the name of the candidate that received the maximum count of votes. If there is a draw between two candidates, then print lexicographically smaller name.

// Examples :

// Input: n = 13
// arr[] = {john,johnny,jackie,johnny,john,jackie,jamie,jamie,john,johnny,jamie,johnny,john}
// Output: john 4
// Explanation: john has 4 votes casted for him, but so does johnny. john is lexicographically smaller, so we print john and the votes he received.

// time complexity: O(n)
// space complexity: O(n)
vector<string> winner(string arr[], int n) {
    unordered_map<string, int> voteCount;

    for (int i=0;i<n;i++) {
        voteCount[arr[i]]++;
    }

    string winnerName;
    int maxVotes = 0;

    for (auto &entry : voteCount) {
        string candidate = entry.first;
        int votes = entry.second;

        if (votes > maxVotes || (votes == maxVotes && candidate < winnerName)) {
            maxVotes = votes;
            winnerName = candidate;
        }
    }
    return {winnerName, to_string(maxVotes)};
}