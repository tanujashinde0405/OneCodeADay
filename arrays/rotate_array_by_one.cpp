#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr, rotate the array by one position in clockwise direction.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
void rotate(vector<int> &arr) {
    int n = arr.size();
    int temp = arr[n-1];
    for(int i=n-1; i>=1;i--)
        arr[i] = arr[i-1];
    arr[0]= temp;
}
