#include<iostream>
using namespace std;

// Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes n as a parameter and prints the number from 1 to n recursively.
// Examples:
// Input: n = 10
// Output: 1 2 3 4 5 6 7 8 9 10
void printNos(int n) {
    if (n==0)
        return;
    printNos(n-1);
    cout<<n<<" ";
}

// You are given a number n. You need to find the sum of digits of n.
// Example 1:
// Input:
// n = 1
// Output: 1
// Explanation: Sum of digit of 1 is 1.
int sumOfDigits(int n)
{
    if (n==0)
        return n;
    else
        return (n%10)+sumOfDigits(n/10);
}

// Given an positive integer n, print numbers from 1 to n without using loops.
// Implement the function printTillN() to print the numbers from 1 to n as space-separated integers.
// Examples
// Input: n = 5
// Output: 1 2 3 4 5
// Explanation: We have to print numbers from 1 to 5.
void printTillN(int n) {
    if(n==0) return;
    printTillN(n-1);
    cout<<n<<" ";
}


// You are given a number n. You need to find nth Fibonacci number.
// F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1
// Example 1:
// Input:
// n = 1
// Output: 1
// Explanation: The first fibonacci
//  number is 1
// Example 2:

// Input:
// n = 20
// Output:6765
// Explanation: The 20th fibonacci 
// number is 6765
int fibonacci(int n)
{
    if (n==0 || n==1) {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

// You are given two numbers n and p. You need to find np.
// Example 1:
// Input:
// n = 9 p = 9 
// Output: 387420489
// Explanation: 387420489 is the value 
// obtained when 9 is raised to the 
// power of 9.
int RecursivePower(int n,int p)
{
    if (p==0)
        return 1;
    else 
    {
        return RecursivePower(n, p-1)*n;
    }
}

// Siddhant made a special series and named it as G.F Series. The series follows this 
// trend  Tn=(Tn-2)2-(Tn-1)  in which the first and the second term are 0 and 1 respectively. Help Siddhant to find the first n terms of the series.
// Examples
// Input: n = 3
// Output: 0 1 -1
// Explanation: First-term is given as 0 and the second term is 1. So the T3 = (T3-2)2 - (T3-1) = T12 - T2 = 02 - 1 = -1
void gfSeries(int N)
{
    solve(N);
    cout<<endl;
}
void solve(int N,long int n1 = 0,long int n2 = 1)
{
    if(n1 == 0) cout<<n1<<" "<<n2<<" ";
        
    if(N >= 3){
        long int n3 = n1*n1-n2;
        cout<<n3<<" ";
        solve(N-1,n2,n3);
    }
}