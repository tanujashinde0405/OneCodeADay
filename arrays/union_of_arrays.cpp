
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given two arrays a[] and b[], the task is to find the number of elements in the union between these two arrays.

// The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.

// Note: Elements of a[] and b[] are not necessarily distinct.

// Examples

// Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3]
// Output: 5
// Explanation: Union set of both the arrays will be 1, 2, 3, 4 and 5. So count is 5.
// Input: a[] = [85, 25, 1, 32, 54, 6], b[] = [85, 2] 
// Output: 7
// Explanation: Union set

int findUnion(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int n1 = a.size();
    int n2 = b.size();
    int i=0;
    int j=0;
    vector<int> res;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(res.size() == 0 || res.back()!=a[i]){
                res.push_back(a[i]);
            }
            i++;
        }
        else{
            if(res.size() == 0 || res.back()!=b[j]){
                res.push_back(b[j]);
            }
            j++;
        }
        
    }
    
    while(i<n1){
        if(res.size() == 0 || res.back()!=a[i]){
            res.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(res.size() == 0 || res.back()!=b[j]){
            res.push_back(b[j]);
        }
        j++;
    }
    return res.size();
}