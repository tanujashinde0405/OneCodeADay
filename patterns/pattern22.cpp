#include <bits/stdc++.h>
using namespace std;

// You are given a number n. You need to generate and print a pattern based on the given value of n.

// For each row, starting from the first, print numbers in descending order from n down to 1.
// Each number in a row is repeated as many times as the current row index (starting from n).
// Instead of printing each row on a new line, separate rows with -1.
// Instead of a newline at the end of each row, print -1 to indicate row separation. After printing the entire pattern, end the output with -1.

// For n= 3,
// pattern:  3 3 3 2 2 2 1 1 1
//           3 3 2 2 1 1 
//           3 2 1

vector<int> printPat(int n) {
    vector<int>ans;
    for(int i=n ; i>0 ; i--)
    {
        for(int j=n ; j>0 ; j--)
        {
            for(int k=0 ; k<i ; k++)
            {
                ans.push_back(j);
            }
        }
        ans.push_back(-1);
    }
    return ans;
}

int main() {
    vector<int> ans = printPat(3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}