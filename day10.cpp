// LeetCode Problem: 1653. Minimum Deletions to Make String Fancy
// Link: https://leetcode.com/problems/minimum-deletions-to-make-string-fancy

class Solution {
public:
    string makeFancyString(string s) {
        int c=1;
        string res;
         res+=s[0];
        for(int i=1; i<s.length(); i++){
            if(s[i]==s[i-1])
                 c++;
            else
                c=1;
            if(c<=2)
                res+=s[i];
        }
        return res;
    }
};