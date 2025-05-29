#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

// Note: The answer should be returned in an increasing format.

// Examples:

// Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
// Output: [5, 6]
// Explanation: 5 and 6 occur more n/3 times.
// Time complexity: O(n) for the first pass to find candidates and O(n) for the second pass to count occurrences, resulting in O(n) overall.
// Space complexity: O(1) for the candidate variables and O(k) for the result vector, where k is the number of majority elements found (at most 2).


vector<int> findMajority(vector<int>& nums) {
    int n = nums.size();
    int candidate1 = -1, candidate2 = -1;
    int cnt1 = 0, cnt2 = 0;
    vector<int> res;
    for(int num : nums){
        if (candidate1 == num){
            cnt1++;
        }
        else if (candidate2 == num){
            cnt2++;
        }
        else if(cnt1 == 0){
            candidate1 = num;
            cnt1++;
        }
        else if(cnt2 == 0){
            candidate2 = num;
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0;
    cnt2 =0;
    for(int num : nums){
        if(candidate1 == num)
            cnt1++;
        if(candidate2 == num)
            cnt2++;
    }
    if(cnt1 > n/3)
        res.push_back(candidate1);
    if(cnt2 > n/3 && candidate1 != candidate2)
        res.push_back(candidate2);
    if(res.size() == 2 && res[0] > res[1])
        swap(res[0], res[1]);
    return res;
}

int main() {
    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    vector<int> result = findMajority(arr);
    
    cout << "Majority elements: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl; // Output: Majority elements: 5 6
    
    return 0;
}

