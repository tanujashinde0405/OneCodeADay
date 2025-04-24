#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[]. The task is to rotate the array by d elements where d ≤ arr.size.

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