// LeetCode Problem: 15. 3Sum
// https://leetcode.com/problems/3sum/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 && nums[i]==nums[i-1])   //no same triplets
               continue;
            int left=i+1,right=nums.size()-1;
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0)
                {
                    res.push_back({nums[i],nums[left],nums[right]});
                    // Skip duplicates
                    while(left < right && nums[left]==nums[left+1]) 
                        left++;
                    while(left < right && nums[right] == nums[right - 1]) 
                        right--;
                    left++;
                    right--;
                }else if(sum<0) //means we need bigger num
                    left++;
                else            //smaller
                    right--;
            }
        }
        return res;
    }
};