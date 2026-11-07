#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int length = nums.size();

        unordered_map<int,int>mp;

        for(int i = 0; i < length; i++){
          
          int current = nums[i];

          if(mp.find(current) != mp.end()){
            return true;
          }
          else {
            mp[current] = i;
          }
        }
        return false;
    }
};

int main() {
  vector<int> nums = {1,2,3};

  Solution s1;
  bool result = s1.containsDuplicate(nums);

  cout<<result;
}