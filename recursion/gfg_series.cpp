// Siddhant made a special series and named it as G.F Series. The series follows this trend  
// Tn=(Tn-2)2-(Tn-1)  in which the first and the second term are 0 and 1 respectively. Help Siddhant to find 
// the first n terms of the series.

// Input: n = 3
// Output: 0 1 -1
// Explanation: First-term is given as 0 and the second term is 1. So the T3 = (T3-2)2 - (T3-1) = T12 - T2 = 02 - 1 = -1

#include<iostream>
using namespace std;

void solve(int N,long int n1 = 0,long int n2 = 1){
    if(n1 == 0) cout<<n1<<" "<<n2<<" ";
        
    if(N >= 3){
        long int n3 = n1*n1-n2;
        cout<<n3<<" ";
        solve(N-1,n2,n3);
    }
}

int main() {
    solve(5);
    cout<<endl;
}