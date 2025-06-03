#include <bits/stdc++.h>
using namespace std;

// output
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 
void pattern17(int N)
{
      for(int i=0;i<N;i++){
          for(char ch =('A'+N-1)-i;ch<=('A'+N-1);ch++){ 
              cout<<ch<<" ";
          }
          cout<<endl;
      }
}

int main()
{
    int N = 5;
    pattern17(N);
    return 0;
}