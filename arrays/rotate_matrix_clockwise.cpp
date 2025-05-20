#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a square mat[][]. The task is to rotate it by 90 degrees in clockwise direction without using any extra space.

// Examples:

// Input: mat[][] = [[1 2 3], [4 5 6], [7 8 9]]
// Output:
// 7 4 1 
// 8 5 2
// 9 6 3


void rotate(vector<vector<int> >& matrix) {
    int n = matrix.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}