#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given an array arr of positive integers. Reverse every sub-array group of size k.

// Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. You shouldn't return any array, modify the given array in place.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5], k = 3
// Output: [3, 2, 1, 5, 4]
// Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.
// Time complexity: O(n)
// Spcade complexity: O(1)
void reverseInGroups(vector<int> &arr, int k) {
    int n = arr.size();
    for(int i=0;i<n;i+=k){
        int left = i;
        int right = min(i+(k-1), n-1);
        
        while(left<right){
            swap(arr[left++], arr[right--]);
        }
    }
}

int main() {
    int n,k;
    cout<<"enter size of array"<<endl;
    cin >> n; 
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout<<"enter k for groups"<<endl;
    cin>>k;

    reverseInGroups(arr1, k);

    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    return 0;
}
