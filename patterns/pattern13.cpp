#include <bits/stdc++.h>
using namespace std;

// output
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

void pattern13(int N)
{
      for(int i=0;i<N;i++){
          for(char ch = 'A'; ch<='A'+i;ch++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
          
      }
}

int main()
{
    int N = 5;
    pattern13(N);
    return 0;
}