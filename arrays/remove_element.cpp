#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Example 1:

// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 2.
// It does not matter what you leave beyond the returned k (hence they are underscores).

int removeElement(vector<int>& nums, int val) {
    int index = 0;
    for(int i = 0; i< nums.size(); i++){
        if(nums[i] != val){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int k = removeElement(nums, val);
    cout << "Number of elements not equal to " << val << ": " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}