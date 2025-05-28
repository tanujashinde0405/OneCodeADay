#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a 2D integer matrix mat[][] of size n x m, where every row and column is sorted in increasing order and a number x, the task is to find whether element x is present in the matrix.

// Examples:

// Input: mat[][] = [[3, 30, 38],[20, 52, 54],[35, 60, 69]], x = 62
// Output: false
// Explanation: 62 is not present in the matrix, so output is false.
// Time complexity: O(n + m) where n is the number of rows and m is the number of columns in the matrix.
// Space complexity: O(1) since we are not using any extra space apart from a few variables.

bool matSearch(vector<vector<int>> &matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int i=0, j=m-1;
    while(i < n && j>=0){
        if(target > matrix[i][j])
            i++;
        else if(target < matrix[i][j])
            j--;
        else
            return true;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{3, 30, 38}, {20, 52, 54}, {35, 60, 69}};
    int target = 62;

    bool found = matSearch(matrix, target);
    cout << (found ? "true" : "false") << endl;

    return 0;
}
