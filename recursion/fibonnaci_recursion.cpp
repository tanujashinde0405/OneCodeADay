#include<iostream>
using namespace std;
int F[10];
// fibonacci series using recursion
// time complexity : O(2^n)
int fib(int n) {
    if (n<=1)
        return n;
    return fib(n-2)+fib(n-1);
}

// fibonacci series using iteration
// time complexity : O(n)
int fibusingiteration(int n) {
    int a=0;
    int b=1;
    int s;
    if (n<=1)
        return n;
    for (int i=2; i<=n;i++){
        s = a+b;
        a=b;
        b=s;
    }
    return s;
}

// fibonacci series using memoization
int fibUsingMemoization(int n) {
    if(n<=1) {
        F[n]= n;
        return n;
    }
    else {
        if (F[n-2]== -1)
            F[n-2] = fibUsingMemoization(n-2);
        if (F[n-1]==-1)
            F[n-1] = fibUsingMemoization(n-1);
        return F[n-2]+F[n-1];
    }
}

int main() {
    int n = 7;
    for(int i=0;i<10;i++){
        F[i] = -1;
    }
    cout<<fibUsingMemoization(n);
}