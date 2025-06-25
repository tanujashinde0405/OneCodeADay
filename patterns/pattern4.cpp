#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 1
// 22
// 333
// 4444
void printPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<"";
        }
        cout<<endl;
    }
}

int main(){
    printPattern(4);
}