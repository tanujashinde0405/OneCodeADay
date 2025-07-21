#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array of integers arr[]. You have to find the Inversion Count of the array. 
// Note : Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

// Examples:

// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
// Input: arr[] = [2, 3, 4, 5, 6]
// Output: 0
// Explanation: As the sequence is already sorted so there is no inversion count.

// Time Complexity: O(n log n)
// Space Complexity: O(n)

int merge(vector<int> &arr, int low, int mid, int high){
    int cnt =0;
    vector<int> temp;
    int left = low;
    int right = mid+1;
    
    while(left <= mid && right <= high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid-left+1);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i]= temp[i-low];
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int l, int r){
    int cnt =0;
    if(l>=r)
        return 0;
    int mid = (l+r)/2;
    cnt += mergeSort(arr, l, mid);
    cnt += mergeSort(arr, mid+1, r);
    cnt += merge(arr, l, mid, r);
    return cnt;
}

int inversionCount(vector<int> &arr) {
    int n = arr.size();
    int cnt = mergeSort(arr, 0, n-1);
    return cnt;
}

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};
    int result = inversionCount(arr);
    cout << "Inversion Count: " << result << endl; // Output: 3
    return 0;
}