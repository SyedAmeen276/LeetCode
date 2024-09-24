#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for(int i=0;i<nums.size();i++){
        int ele = nums[i];
         if(numMap.find(target - ele) != numMap.end()){
           return { i,  numMap[target-ele] };
         }
         else
         numMap[ele] = i;
        }
       return {};
    }
};

