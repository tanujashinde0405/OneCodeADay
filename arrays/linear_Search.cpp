#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int x) {

    int n = arr.size();
    int found = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            found = i;
            break;
        }
    }
    return found;
}

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout<<"enter search element: \n";
    cin>>x;

    cout<<"element index is:"<<search(arr, x)<<endl;
    return 0;
}