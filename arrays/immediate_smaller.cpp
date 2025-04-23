#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an integer array arr. For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller. If the next element is smaller, update the current index to that element. If not, then update to -1.

// Note: Update the array in itself.

// Examples:

// Input: arr[] = [4, 2, 1, 5, 3]
// Output: [2, 1, -1, 3, -1]

void immediateSmaller(vector<int>& arr) {
    int n = arr.size();
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            arr[i] = arr[i+1];
        else
            arr[i] = -1;
    }
    arr[i]=-1;
}

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    immediateSmaller(arr);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}