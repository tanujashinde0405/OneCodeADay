#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

bool isPal(int left, int right, const string &s)
{
    while (left < right)
    {
        if (!isalnum(s[left]))
        {
            left++;
            continue;
        }
        if (!isalnum(s[right]))
        {
            right--;
            continue;
        }
        if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool isPalindrome(string s)
{
    return isPal(0, s.length() - 1, s);
}