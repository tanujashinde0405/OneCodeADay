#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// * 
// * * 
// * * * 
// * * * * 
void printPattern(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    printPattern(4);
}