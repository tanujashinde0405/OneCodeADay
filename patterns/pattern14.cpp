#include <bits/stdc++.h>
using namespace std;

// output
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
void pattern14(int N)
{
      for(int i=0;i<N;i++){
          for(char ch = 'A'; ch<='A'+(N-i-1);ch++){
              cout<<ch<<" ";
          }
          cout<<endl;
      }
}

int main()
{
    int N = 5;
    pattern14(N);
    return 0;
}