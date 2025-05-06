#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two arrays a[] and b[] of equal size, the task is to find whether the elements in the arrays are equal.

// Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though.

// Note: If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

// Examples:

// Input: a[] = [1, 2, 5, 4, 0], b[] = [2, 4, 5, 0, 1]
// Output: true
// Explanation: Both the array can be rearranged to [0,1,2,4,5]
// O(n), O(1)
bool checkEqual(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();
    if(n!=m)
        return false;
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++)
        m1[a[i]]++;
    for(int i=0;i<n;i++){
        if(m1.find(b[i])==m1.end())
            return false;
        if(m1[b[i]]==0)
            return false;
        m1[b[i]]--;
    }
    return true;
}

// another approach
// O(n*logn), O(1)
bool check(vector<ll> A, vector<ll> B, int N) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for (int i=0;i<N;i++)
    {
        if(A[i]!=B[i])
            return false;
    }
    return true;
    
}