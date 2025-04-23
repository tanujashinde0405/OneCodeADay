#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr, the task is to find whether the arr is palindrome or not. If the arr is palindrome then return true else return false.

// An array is said to be palindrome if its reverse array matches the original array. 

// Examples:

// Input: arr = [1, 2, 3, 2, 1]
// Output: true
// Explanation: Here we can see we have [1, 2, 3, 2, 1] if we reverse it we can find [1, 2, 3, 2, 1] which is the same as before. So, the answer is true.
bool isPerfect(vector<int> &arr) {
    int n = arr.size();
    int i=0, j=n-1;
    while(i<=j){
        if(arr[i]!=arr[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"palindrome array : "<<isPerfect(arr)<<endl;
    return 0;
}