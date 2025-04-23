#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given an array arr. Your task is to find the minimum and maximum elements in the array.

// Note: Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.

// Examples:

// Input: arr[] = [3, 2, 1, 56, 10000, 167]
// Output: 1 10000
// Explanation: minimum and maximum elements of array are 1 and 10000.
// Time complexity: O(n)
// Spcade complexity: O(1)
pair<int, int> getMinMax(vector<int> arr)
{
    int min = INT_MAX;
    int max = INT_MIN;
    pair<int, int> p;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    p.first = min;
    p.second = max;
    return p;
}

int main()
{
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int,int> p1 = getMinMax(arr);

    cout << "min element is:" <<p1.first<< endl;
    cout << "max element is:" <<p1.second<< endl;
    return 0;
}