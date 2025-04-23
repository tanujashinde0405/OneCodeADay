#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.

// Note: Return two elements where the first one in the count of odd & second one is the count of even.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: 3 2
// Explanation: There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).
pair<int, int> countOddEven(vector<int> &arr) {
    pair<int, int>ans;
    int even=0, odd=0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
    }
    ans.first = odd;
    ans.second = even;
    return ans;
}

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int, int> ans = countOddEven(arr);
    cout<<"odd elements are: "<<ans.first<<endl;
    cout<<"even elements are: "<<ans.second<<endl;
    return 0;
}