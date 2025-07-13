//day-4
//LeetCode: https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> t;
        int l=0, r=0, len=0;
        while(r<s.length())
        {
            if(t.find(s[r])==t.end()){
                t.insert(s[r]);
                len=max(len,r-l+1);
                r++;
            }else{
                t.erase(s[l]);
                l++;
            }
        }
        return len;
    }
};