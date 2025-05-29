#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

// Note: The answer should be returned in an increasing format.

// Examples:

// Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
// Output: [5, 6]
// Explanation: 5 and 6 occur more n/3 times.

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