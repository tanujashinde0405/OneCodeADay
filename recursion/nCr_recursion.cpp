#include<iostream>
using namespace std;

int combination(int n, int r){
    if (r==0 || n==r)
        return 1;
    return combination(n-1, r-1) + combination(n-1, r);
}

int main() {
    cout<<combination(5,3)<<endl;
    return 0;
}