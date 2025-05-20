#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

// Note - A permutation of an array of integers refers to a specific arrangement of its elements in a sequence or linear order.

// Examples:

// Input: arr = [2, 4, 1, 7, 5, 0]
// Output: [2, 4, 5, 0, 1, 7]
// Explanation: The next permutation of the given array is {2, 4, 5, 0, 1, 7}.
// Time Complexity: O(n)
// Space Complexity: O(1)

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int pivot = -1;

    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(nums.begin(), nums.end());
        return;
    }

    for(int i=n-1;i>pivot;i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i], nums[pivot]);
            break;
        }
    }
    reverse(nums.begin()+pivot+1, nums.end());
    return;
}

int main() {
    vector<int> arr = {2, 4, 1, 7, 5, 0};
    nextPermutation(arr);
    cout << "Next permutation is: ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}