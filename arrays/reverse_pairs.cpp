#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given an array arr[ ] of positive integers, find the count of reverse pairs. A pair of indices (i, j) is said to be a reverse pair if both the following conditions are met:
//    1.  0 ≤ i < j < arr.size() 
//    2.  arr[i] > 2 * arr[j]

// Examples:
// Input: arr[] = [3, 2, 4, 5, 1, 20]
// Output: 3
// Explanation:
// The Reverse pairs are 
// (0, 4), arr[0] = 3, arr[4] = 1, 3 > 2*1 
// (2, 4), arr[2] = 4, arr[4] = 1, 4 > 2*1 
// (3, 4), arr[3] = 5, arr[4] = 1, 5 > 2*1 

// Time Complexity: O(n log n)
// Space Complexity: O(n)
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
int countReversepairs(vector<int> &nums, int low, int mid, int high){
    int cnt =0;
    int right = mid+1;
    for(int i=low; i<=mid; i++){
        while(right <= high && nums[i] > 2LL* nums[right]) right++;
        cnt += (right - (mid+1));
    }
    return cnt;
}
int mergeSort(vector<int> &nums, int l, int r){
    int cnt = 0;
    if(l>=r) return cnt;
    int mid = (l+r)/2;
    cnt += mergeSort(nums, l, mid);
    cnt += mergeSort(nums, mid+1, r);
    cnt += countReversepairs(nums, l, mid, r);
    merge(nums, l, mid, r);
    return cnt;
}
int countRevPairs(vector<int> &nums) {
    int n = nums.size();
    int cnt = mergeSort(nums, 0, n-1);
    return cnt;
}

int main() {
    vector<int> arr = {3, 2, 4, 5, 1, 20};
    int result = countRevPairs(arr);
    cout << "Count of reverse pairs: " << result << endl;
    return 0;
}