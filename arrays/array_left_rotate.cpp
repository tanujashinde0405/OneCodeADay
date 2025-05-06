#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[]. The task is to rotate the array by d elements where d ≤ arr.size.
// juggling algorithm
// Examples:

// Input: arr[] = [-1, -2, -3, 4, 5, 6, 7], d = 2
// Output: [-3, 4, 5, 6, 7, -1, -2]
// Explanation: 
// Rotate by 1: [-2, -3, 4, 5, 6, 7, -1]
// Rotate by 2: [-3, 4, 5, 6, 7, -1, -2]
// Time Complexity: O(n)
// Space Complexity: O(1)

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    
    d %= n;
    int cycles = __gcd(n,d);
    
    for(int i=0;i<cycles;i++){
        int start = arr[i];
        
        int current = i, next;
        
        while(true){
            next = (current+d)%n;
            
            if(next==i)
                break;
            
            arr[current] = arr[next];
            current = next;
        }
        arr[current] = start;
    }
}

void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
  
    // Handle the case where d > size of array
    d %= n;
  
    // Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());
  
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}