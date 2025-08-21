#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] containing strings of names. Your task is to return the longest string. If there are multiple names of the longest size, return the first occurring name.

// Examples :

// Input: arr[] = ["Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks"]
// Output: "GeeksforGeeks"
// Explanation: name "GeeksforGeeks" has maximum length among all names. 

// time complexity: O(n)
// space complexity: O(1)
string longest(vector<string>& arr) {
    int maxlen=0;
    int indx=0;
    for(int i=0;i<arr.size();i++)
    {
        int len=arr[i].size();
        if(maxlen<len)
        {
            maxlen=len;
            indx=i;
        }
    }
    return arr[indx];
}