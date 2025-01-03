// print elements in sequnctial order using recursion
// head recusrion
// time complexity O(n)
// space complexity O(n)
#include<iostream>

using namespace std;
void fun1(int n) {
    if (n>0) {
        fun1(n-1);
        cout<<n<<endl;
    }
}
int main() {
    int x=3;
    fun1(x);
    return 0;
}