#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You have a row of flowers, where each flower blooms after a specific day. The array arr represents the blooming schedule: arr[i] is the day the flower at position i will bloom. To create a bouquet, you need to collect k adjacent bloomed flowers. Each flower can only be used in one bouquet.

// Your goal is to find the minimum number of days required to make exactly m bouquets. If it is not possible to make m bouquets with the given arrangement, return -1.

// Examples:
// Input: m = 3, k = 2, arr[] = [3, 4, 2, 7, 13, 8, 5]
// Output: 8
// Explanation: We need 3 bouquets and each bouquet should have 2 flowers. After day 8: [x, x, x, x, _, x, x], we can make first bouquet from the first 2 flowers, second bouquet from the next 2 flowers and the third bouquet from the last 2 flowers.

// Time Complexity: O(n log(max(arr)))
// Space Complexity: O(1)
bool check(vector<int> &arr, int m , int k, int days){
    int boq = 0;
    int cnt =0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i] <= days){
            cnt++;
        } else {
            boq += cnt/k;
            cnt =0;
        }
    }
    boq += cnt/k;
    return boq>=m;
}
int minDaysBloom(int m, int k, vector<int> &arr) {
    int n = arr.size();
    if(1LL*m*k > n) return -1;
    int low = 0;
    int high = *max_element(arr.begin(), arr.end());
    int res = high;
    
    while(low <= high) {
        int mid = (low+high)/2;
        
        if(check(arr, m,k, mid)){
            res = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return res;
}

int main() {
    int m = 3, k = 2;
    vector<int> arr = {3, 4, 2, 7, 13, 8, 5};
    
    int result = minDaysBloom(m, k, arr);
    cout << "Minimum days to make " << m << " bouquets: " << result << endl;
    
    return 0;
}