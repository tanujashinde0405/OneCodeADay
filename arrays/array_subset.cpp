#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

// Examples:

// Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
// Output: true
// Explanation: b[] is a subset of a[]
// Time complexity:O(n+m)
// space complexity: O(n)
bool isSubset(vector<int> &a, vector<int> &b) {
    map<int, int> freq;

    for (int i = 0; i < a.size(); ++i)
        freq[a[i]]++;

    for (int i = 0; i < b.size(); ++i) {
        if (freq[b[i]] == 0)
            return false;
        freq[b[i]]--;
    }

    return true;
}

int main() {
    int n,m;
    cout<<"enter size of array 1"<<endl;
    cin >> n; 
    cout<<"enter size of array 2"<<endl;
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout<<isSubset(arr1, arr2);
    return 0;
}
