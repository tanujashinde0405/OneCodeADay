#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array of arr. Find the first element in an array such that all of its left elements are smaller and all right elements of its are greater than it.

// Note: Return -1 if there is no such element.

// Examples : 

// Input: arr = [4, 2, 5, 7]
// Output: 5
// Explanation: Elements on left of 5 are smaller than 5 and on right of it are greater than 5.

int findElement(vector<int> &arr) {
    int n=arr.size();
    int ans=0,maxans=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]<arr[i] && arr[i] < arr[i+1]) ans=arr[i];
        else maxans = max(maxans,arr[i]);
    }
    
    if(ans > maxans) return ans;
    
    return -1;
}
// Driver code
int main() {
    vector<int> arr = {4, 2, 5, 7};
    int result = findElement(arr);
    cout << "The first element such that all left elements are smaller and all right elements are greater is: " << result << endl;
    return 0;
}