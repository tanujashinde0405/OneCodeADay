#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.

// You need to solve this problem without utilizing the built-in sort function.

// Examples:

// Input: arr[] = [0, 1, 2, 0, 1, 2]
// Output: [0, 0, 1, 1, 2, 2]
// Explanation: 0s 1s and 2s are segregated into ascending order.
// O(n), O(1)

void sort012(vector<int>& a) {
    int n = a.size();
    int low = 0;
    int high = n-1;
    int mid = 0;
    while (mid <= high){
        switch (a[mid]) {
            case 0:
                swap(a[low++], a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid], a[high--]);
                break;
        }
    }
}