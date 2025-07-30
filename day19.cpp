// LeetCode Problem: Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix?envType=problem-list-v2&envId=eeudwo2i

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        for(int i=0; i<strs[0].length(); i++)
        {
            char curr=strs[0][i];
            for(int s=1; s<strs.size(); s++)
            {
                if(i>=strs[s].size() || strs[s][i]!=curr)
                    return res;
            }
            res+=curr;
        }
        return res;
    }
};