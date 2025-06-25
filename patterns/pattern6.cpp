#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
void printPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    printPattern(4);
}