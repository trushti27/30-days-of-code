// LeetCode Problem: Maximum Subarray Sum with Non-Negative Integers
// Link: https://leetcode.com/problems/maximum-subarray-sum-with-non-negative-integers
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int max=nums[0];
        set<int> r;
        for(int i=0; i<nums.size(); i++)
        {
            if(max<nums[i])
                max=nums[i];
        }
        if(max<0)
            return max;
        else{
            int sum=0;
            for(auto i:nums)
            {
                if(i>=0)
                    r.insert(i);
            }  
            for(auto x:r)
                sum+=x;
            return sum;
        }
    }
};