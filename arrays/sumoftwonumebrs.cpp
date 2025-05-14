#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given two numbers represented by two different arrays, arr1[] and arr2[], the task is to find their sum as a new array. Each array represents a number where each element corresponds to a digit in that number. The resulting sum array should also represent the sum of the two numbers in the same digit-by-digit format.

// Note: No leading zeroes in array arr1 and arr2.

// Examples:

// Input: arr1[] = [5, 6, 3], arr2[] = [8, 4, 2]
// Output: [1, 4, 0, 5]
// Explanation: As 563 + 842 = 1405.

vector<int> findSum(vector<int> &arr1, vector<int> &arr2) {
    vector<int> ans;
    int m = arr1.size();
    int n = arr2.size();
    int carry =0;
    while(m>0 || n>0 || carry>0){
        int x=0;
        int y=0;
        if(m>0)
            x = arr1[--m];
        if(n>0)
            y = arr2[--n];
        int sum = x+y+carry;
        ans.push_back(sum%10);
        carry = sum/10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}