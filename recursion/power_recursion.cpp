#include<iostream>
using namespace std;

int pow(int m, int n) {
    if (n==0)
        return 1;
    else 
    {
        return pow(m, n-1)*m;
    }
}

int powWithLessMultiplicatios(int m, int n) {
    if (n==0)
        return 1;
    else if (n%2==0)
        return powWithLessMultiplicatios(m*m, n/2);
    else 
        return m*powWithLessMultiplicatios(m*m, (n-1)/2);
}

int main() {
    int m = 2, n = 5;
    cout<<pow(m,n);
    return 0;
}