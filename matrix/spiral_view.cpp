#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given a rectangular matrix mat[][] of size n x m, and your task is to return an array while traversing the matrix in spiral form.

// Examples:

// Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
// Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]

vector<int> spirallyTraverse(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    int top=0, bottom = m-1, left =0, right= n-1;
    vector<int> res;

    while(top<=bottom && left<=right){
        for(int i=left; i<=right;i++){
            res.push_back(matrix[top][i]);
        }
        top++;

        for(int i=top; i<=bottom; i++){
            res.push_back(matrix[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                res.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return res;
}