/*
2815. Max Pair Sum in an Array

    User Accepted: 14128
    User Tried: 15690
    Total Accepted: 14598
    Total Submissions: 26356
    Difficulty: Easy

You are given a 0-indexed integer array nums. You have to find the maximum sum of a pair of numbers from nums such that the maximum digit in both numbers are equal.

Return the maximum sum or -1 if no such pair exists.

 

Example 1:

Input: nums = [51,71,17,24,42]
Output: 88
Explanation: 
For i = 1 and j = 2, nums[i] and nums[j] have equal maximum digits with a pair sum of 71 + 17 = 88. 
For i = 3 and j = 4, nums[i] and nums[j] have equal maximum digits with a pair sum of 24 + 42 = 66.
It can be shown that there are no other pairs with equal maximum digits, so the answer is 88.

Example 2:

Input: nums = [1,2,3,4]
Output: -1
Explanation: No pair exists in nums with equal maximum digits.

 

Constraints:

    2 <= nums.length <= 100
    1 <= nums[i] <= 104


*/

#include<bits/stdc++.h>
using namespace std;

void fillVec(vector<int>&v,int n){
    while(n!=0){
        v.push_back(n%10);
        n/=10;
    }
    return;
}
class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> dig;
        for(auto it: nums){
            vector<int>v;
            fillVec(v,it);
            dig.push_back(*max_element(v.begin(),v.end()));
        }
        vector<int> sum;
        for(int i=0;i<dig.size();i++){
            for(int j=0;j<dig.size();j++){
                if((i!=j)&&(dig[i]==dig[j])){
                    sum.push_back(nums[i]+nums[j]);
                }
            }
        }
        if(sum.size()==0){
            return -1;
        }
        else{
            return *max_element(sum.begin(),sum.end());
        }
        
    }
};