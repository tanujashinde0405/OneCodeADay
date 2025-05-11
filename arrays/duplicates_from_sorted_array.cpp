#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given a sorted array arr. Return the size of the modified array which contains only distinct elements.
// Note:
// 1. Don't use set or HashMap to solve the problem.
// 2. You must return the modified array size only where distinct elements are present and modify the original array such that all the distinct elements come at the beginning of the original array.

// Examples :

// Input: arr = [2, 2, 2, 2, 2]
// Output: [2]
// Explanation: After removing all the duplicates only one instance of 2 will remain i.e. [2] so modified array will contains 2 at first position and you should return 1 after modifying the array, the driver code will print the modified array elements.
// O(n), O(1)

int removeDuplicates(vector<int> &arr) {
    int n = arr.size();
    if (n==0 || n==1)
        return n;
    int j = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i] != arr[i+1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n-1];
    return j;
}
