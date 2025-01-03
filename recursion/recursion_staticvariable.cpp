// addition of elements using recursion with static variable
#include<iostream>

using namespace std;
int fun1(int n) {
    static int x = 0;
    if (n>0){
        x++;
        return fun1(n-1)+x;
    }
    return 0;
}
int main() {
    int a=5;
    cout<<fun1(a);
    return 0;
}