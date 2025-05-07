#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] containing positive elements. A and B are two numbers defining a range. The task is to check if the array contains all elements in the given range (inclusive).

// Note: If the array contains all elements in the given range return true otherwise return false.

// Examples :

// Input: n = 7, A = 2, B = 5, arr[] =  {1, 4, 5, 2, 7, 8, 3}
// Output: True
// Explanation: It has all elements between range 2-5 i.e 2,3,4,5.
// O(n), O(1)
bool check_elements(int arr[], int n, int A, int B) {
    if(n<B-A+1) return false;
    int range = B-A;
    
    for(int i=0;i<n;i++){
        if(abs(arr[i])>=A && abs(arr[i])<=B){
            int z = abs(arr[i])-A;
            if(arr[z]>0){
                arr[z] = arr[z]*-1;
            }
        }
    }
    int count =0;
    for(int i=0;i<=range && i<n;i++){
        if(arr[i]>0)
            return false;
        else
            count++;
    }
    if(count!= (range+1))
        return false;
    return true;
}