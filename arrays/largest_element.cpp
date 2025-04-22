#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[]. The task is to find the largest element and return it.

// Examples:

// Input: arr[] = [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of the given array is 90.
int largest(vector<int> &arr) {
    int n = arr.size();
    if (n==1)
        return arr[0];
    if (n==2){
        if(arr[0]>arr[1])
            return arr[0];
        else
            return arr[1];
    }
    int max = INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"largest element is:"<<largest(arr)<<endl;
    return 0;
}
