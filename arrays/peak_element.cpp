#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Peak Element
// Given an array arr[] where no two adjacent elements are same, find the index of a peak element. An element is considered
//  to be a peak if it is greater than its adjacent elements (if they exist). If there are multiple peak elements, 
//  return index of any one of them. The output will be "true" if the index returned by your function is correct; 
//  otherwise, it will be "false".
// Space Complexity : O(1)
// time complexity: O(n)
int peakElement(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool left = (i == 0) || (arr[i] >= arr[i - 1]);
        bool right = (i == n - 1) || (arr[i] >= arr[i + 1]);

        if (left && right)
            return i;
    }
    return 0;
}

// another approach with time complexity reduced to O(logn)
int peakElementusingbinarysearch(vector<int> &arr) {
    int n = arr.size();
    int low = 0, high = n-1;
    
    while(low <= high) {
        int mid = low + (high- low)/2;
        
        bool left = (mid ==0) || (arr[mid] >= arr[mid-1]);
        bool right = (mid == n-1) || (arr[mid] >= arr[mid+1]);
        
        if (left && right)
            return mid;
        else if (mid >0 && arr[mid-1] > arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"peak element index is:"<<peakElement(arr)<<endl;
    cout<<"peak element index using binary search approach is:"<<peakElement(arr)<<endl;
    return 0;
}
