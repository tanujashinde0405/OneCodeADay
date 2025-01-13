// sum of natural numbers using recursion

#include<iostream>
using namespace std;
int sum1(int n);
int sum2(int n);

// O(n), O(n)
int sum(int n) {
    if (n==0)
        return 0;
    else
        return sum(n-1)+n;
}
int main() {
    int n=5;
    cout<<sum(5)<<endl;
}

// two more ways to calculate sum of natural numbers
// O(1),O(1)
int sum1(int n) {
    return n*(n+1)/2;
}

// O(n), O(1)
int sum2(int n) {
    int s=0;
    for(int i=0;i<=n;i++){
        s= s+i;
    }
    return s;
}