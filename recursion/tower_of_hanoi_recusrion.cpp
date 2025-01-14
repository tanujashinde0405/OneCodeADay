#include<iostream>
using namespace std;

// tower of hanoi problem
// O(2^n)
void tower(int n, int a, int b, int c) {
    if (n>0) {
        tower(n-1, a, c, b);
        cout<<a<< " To "<<c<<endl;
        tower(n-1, b, a, c);
    }
}

int main() {
    tower(3,1,2,3);
    return 0;
}