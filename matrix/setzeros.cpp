#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// You are given a 2D matrix mat[][] of size n×m. The task is to modify the matrix such that if mat[i][j] is 0, all the elements in the i-th row and j-th column are set to 0 and do it in constant space complexity.

// Examples:

// Input: mat[][] = [[1, -1, 1],
//                 [-1, 0, 1],
//                 [1, -1, 1]]
// Output: [[1, 0, 1],
//         [0, 0, 0],
//         [1, 0, 1]]
// Explanation: mat[1][1] = 0, so all elements in row 1 and column 1 are updated to zeroes.

void setMatrixZeroes(vector<vector<int>> &matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int col0=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j==0)
                    col0=0;
                else
                    matrix[0][j] = 0;
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j] = 0;
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int j=0;j<m;j++){
            matrix[0][j] = 0;
        }
    }

    if(col0==0){
        for(int i=0;i<n;i++)
            matrix[i][0] = 0;
    }
    
}