#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Time complexity: O(log n) due to the divide and conquer approach.
// Space complexity: O(log n) due to the recursive stack space.

double myPow(double x, int n) {
    long long N = n;
    if(N == 0)
        return 1;
    if(N< 0){
        x = 1/x;
        N = -N;
    }
    double temp = myPow(x, N/2);
    if(N%2==0)
        return temp*temp;
    else
        return x*temp*temp;
}
int main() {
    double x = 2.0;
    int n = 10;
    cout << myPow(x, n) << endl; // Output: 1024.00000
    return 0;
}
