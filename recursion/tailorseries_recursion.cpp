#include<iostream>
using namespace std;

// tailor series equation
// e^x = 1+ x/1 + x^2/2! + x^3/3! .... + x^n/n!

// tailor series using recusrion
// multiplications required using below function : n(n+1) = n^2
double tailorSeries(int x, int n) {
    static double pow = 1, factorial = 1;
    double r;
    if (n==0)
        return 1;
    r = tailorSeries(x, n-1);
    pow = pow * x;
    factorial = factorial * n;
    return r + pow/factorial;
}

// tailor series using horner's rule
// multiplications required using below function : n
double tailorSeriesUsingHornersRule(int x, int n) {
    static double s;
    if (n==0) 
        return s;
    s = 1+ x* s/n;
    return tailorSeriesUsingHornersRule(x, n-1);

}

// tailor series using recusrion
double tailorSeriesUsingIteration(int x, int n) {
    double s = 1;
    double num = 1;
    double den = 1;
    for (int i = 1; i<=n; i++) {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}
int main() {
    int x = 1, n = 10;
    cout<<tailorSeriesUsingIteration(3, 10)<<endl;
}