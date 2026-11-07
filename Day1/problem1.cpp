/*

You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
Example 1:

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Explanation:

The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.

*/


// code implementation

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();

        unordered_map<int,int>mp;

        for(int i = 0; i < length; i++){
          int current = nums[i];

          int required = target - current;

         if(mp.find(required) != mp.end()){
            return {mp[required], i};
          }
          else {
            mp[current] = i;
          }
        }
      return {};
    }
};



int main () {

  vector<int> nums = {3,2,4};
  int target = 6;

  Solution S1;
  vector<int> result = S1.twoSum(nums,target);

  for(int i = 0; i < result.size(); i++){
    cout<< result[i]<<" ";
  }
}
