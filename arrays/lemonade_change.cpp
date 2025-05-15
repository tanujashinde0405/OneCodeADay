
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

// Note that you do not have any change in hand at first.

// Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with the correct change, or false otherwise.

 

// Example 1:

// Input: bills = [5,5,5,10,20]
// Output: true
// Explanation: 
// From the first 3 customers, we collect three $5 bills in order.
// From the fourth customer, we collect a $10 bill and give back a $5.
// From the fifth customer, we give a $10 bill and a $5 bill.
// Since all customers got correct change, we output true.

bool lemonadeChange(vector<int>& bills) {
    int count5 = 0, count10 = 0;
    for(int i=0;i<bills.size();i++){
        if(bills[i]==5){
            count5++;
        }
        else if(bills[i]==10){
            if(count5>0){
                count5--;
                count10++;
            }
            else{
                return false;
            }
        }
        else{
            if(count5>0 && count10>0){
                count5--;
                count10--;
            }
            else if(count5>2){
                count5-=3;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main() {
    vector<int> bills = {5, 5, 5, 10, 20};
    cout << (lemonadeChange(bills) ? "true" : "false") << endl; // Output: true
    return 0;
}