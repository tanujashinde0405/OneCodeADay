#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a positive integer n, find the square root of n. If n is not a perfect square, then return the floor value.
// Floor value of any number is the greatest Integer which is less than or equal to that number
// Examples:
// Input: n = 4
// Output: 2
// Explanation: Since, 4 is a perfect square, so its square root is 2.

int floorSqrt(int n) {
    int low = 1, high = n/2;
    int res = 1;
    
    while(low<=high){
        int mid = low+ (high-low)/2;
        
        if(mid*mid <= n){
            res= mid;
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return res;
}

