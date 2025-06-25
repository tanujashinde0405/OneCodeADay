#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a number n, determine whether it is a prime number or not.

// A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

// Examples :

// Input: n = 7
// Output: true
// Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.

bool isPrime(int n) {
    int cnt = 0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            cnt++;
            if(n%i != i)
                cnt++;
        }
    }
    if(cnt == 2)
        return true;
    else
        return false;
}

