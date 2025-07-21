#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

// Note: It is guaranteed that the answer fits in a 32-bit integer.

// Examples

// Input: arr[] = [-2, 6, -3, -10, 0, 2]
// Output: 180
// Explanation: The subarray with maximum product is [6, -3, -10] with product = 6 * (-3) * (-10) = 180.

// Time Complexity: O(n)
// Space Complexity: O(1)
int maxProduct(vector<int> &arr) {
    int n = arr.size();
    int maxProd = INT_MIN;
    
    int prefix = 1;
    int suffix = 1;
    
    for(int i=0;i<n;i++){
        if(prefix ==0)
            prefix = 1;
        if(suffix == 0)
            suffix = 1;
        prefix *= arr[i];
        
        int j = n-i-1;
        suffix *= arr[j];
        maxProd = max({prefix, suffix, maxProd});
    }
    return maxProd;
}

int main() {
    vector<int> arr = {-2, 6, -3, -10, 0, 2};
    int result = maxProduct(arr);
    cout << "Maximum product of subarray: " << result << endl;
    return 0;
}