#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given an integer n, return the first n elements of Recaman’s sequence.
// It is a function with domain and co-domain as whole numbers. It is recursively defined as below:
// Specifically, let a(n) denote the (n+1)th term. (0 being the 1st term).
// The rule says:
// a(0) = 0
// a(n) = a(n-1) - n, if a(n-1) - n > 0 and is not included in the sequence previously
//        =  a(n-1) + n otherwise.

// Example 1:

// Input: 
// n = 5
// Output: 
// 0 1 3 6 2
// Explaination: 
// a(0) = 0,
// a(1) = a(0)-1 = 0-1 = -1 and -1<0, therefore a(1) = a(0)+1 = 1,
// a(2) = a(1)-2 = 1-2 = -1 and -1<0, therefore a(2) = a(1)+2 = 3,
// a(3) = a(2)-3 = 3-3 = 0 but since 0 is already present in the sequence, a(3) = a(2)+3 = 3+3 = 6,
// a(4) = a(3)-4 = 6-4 = 2.
// Therefore the first 5 elements of Recaman's sequence will be 0 1 3 6 2.

vector<int> recamanSequence(int n){
    vector<int> v;
    map<int,int> m;
    m[0]++;
    v.push_back(0);
    for(int i = 1; i<n; i++)
    {
        if(((v[i-1] - i) < 0) || m.find(v[i-1]-i) != m.end())
        {
            m[v[i-1]+i]++;
            v.push_back(v[i-1]+i);
        }
        else 
        {
            v.push_back(v[i-1]-i);
            m[v[i-1]-i]++;
        }
    }
    return v;
}

