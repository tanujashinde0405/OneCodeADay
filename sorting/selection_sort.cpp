#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// time complexity O(n2)
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}