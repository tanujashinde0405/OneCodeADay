#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void rotateArr(vector<int> &arr, int d) {
    int n = arr.size();

    // Handle the case where d > size of array
    d %= n;

    // Calculate the number of cycles in the rotation
    int cycles = __gcd(n, d);

    // Process each cycle
    for (int i = 0; i < cycles; i++) {

        // Start index of current cycle
        int currIdx = i;
        int currEle = arr[currIdx];

        // Rotate elements till we reach the start of cycle
        do {
            int nextIdx = (currIdx + d) % n;
            int nextEle = arr[nextIdx];
          
            // Update the element at next index with the current element
            arr[nextIdx] = currEle;
          
            // Update the current element to next element
            currEle = nextEle;
          
            // Move to the next index
            currIdx = nextIdx;
        } while (currIdx != i);
    }
}

// Function to rotate an array by d elements to the right
void rotateArr1(vector<int>& arr, int d) {
    int n = arr.size();
  
    // Handle the case where d > size of array
    d %= n;

  	// Reverse the entire array
    reverse(arr.begin(), arr.end());
  
    // Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());
}