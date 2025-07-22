#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

 

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30

bool check(vector<int>& piles, int k, int h) {
    long long  hours = 0;
    for (int pile : piles) {
        hours += (pile + k - 1) / k;  // ceiling division
        if (hours > h) return false;
    }
    return hours <= h;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int res =high;
    while(low <= high){
        int mid = low + (high-low)/2;
        if (check(piles, mid, h)){
            res = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return res;
}