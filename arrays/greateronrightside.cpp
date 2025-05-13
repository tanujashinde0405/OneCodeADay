#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// O(n), O(n)
vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;
    ans.push_back(-1);
    int max = INT_MIN;
    for(int i=n-1;i>0;i--){
        if(arr[i]> max)
            max = arr[i];
        ans.push_back(max);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// O(n), O(1)
// This is the optimal solution
vector<int> replaceElements(vector<int>& a) {
    int n=a.size();
    int maxx=a[n-1];
    int temp=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(maxx<temp)
            maxx=temp;
        temp=a[i];
        a[i]=maxx;
    }
    a[n-1]=-1;
    return a;
}