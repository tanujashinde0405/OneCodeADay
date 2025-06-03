#include <bits/stdc++.h>
using namespace std;

// output
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
void pattern15(int N)
{
      for(int i=0;i<N;i++){
          char ch = 'A'+i;
          for(int j=0;j<=i;j++){
              cout<<ch<<" ";
          }
          cout<<endl;
      }
}

int main()
{
    int N = 5;
    pattern15(N);

    return 0;
}