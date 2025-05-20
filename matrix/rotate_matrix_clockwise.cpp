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
// time complexity: O(n^2)
// space complexity: O(1)

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

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
    cout << "Rotated matrix is: " << endl;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}