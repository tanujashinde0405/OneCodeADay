#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partidx = partition(arr, low, high);
        quickSort(arr, low, partidx - 1);
        quickSort(arr, partidx + 1, high);
    }
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}