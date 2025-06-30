#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given an integer array nums, an integer array queries, and an integer x.

// For each queries[i], you need to find the index of the queries[i]th occurrence of x in the nums array. If there are fewer than queries[i] occurrences of x, the answer should be -1 for that query.

// Return an integer array answer containing the answers to all queries.

// Example 1:

// Input: nums = [1,3,1,7], queries = [1,3,2,4], x = 1

// Output: [0,-1,2,-1]

// Explanation:

// For the 1st query, the first occurrence of 1 is at index 0.
// For the 2nd query, there are only two occurrences of 1 in nums, so the answer is -1.
// For the 3rd query, the second occurrence of 1 is at index 2.
// For the 4th query, there are only two occurrences of 1 in nums, so the answer is -1.

vector<int> occurrencesOfElement(vector<int> &nums, vector<int> &queries, int x)
{
    vector<int> res;
    unordered_map<int, int> mp;
    int occ = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == x)
        {
            occ++;
            mp[occ] = i;
        }
    }
    for (int j = 0; j < queries.size(); j++)
    {
        if (mp.find(queries[j]) != mp.end())
        {
            res.push_back(mp[queries[j]]);
        }
        else
        {
            res.push_back(-1);
        }
    }
    return res;
}