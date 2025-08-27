// Day 29: Implement strStr()
// https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle){
        if(haystack.length()<needle.length())
            return -1;
        for(int i=0; i<=haystack.length()-needle.length(); i++)
        {
           int j=0;
            while(j<needle.length() && haystack[i+j]==needle[j])
               j++;
            if(j==needle.length())
                return i;
        }
        return -1;
    }
};