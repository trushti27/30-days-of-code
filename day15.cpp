// LeetCode 5. Longest Palindromic Substring
// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())
            return s;
        int start=0,end=0;

        for(int i=0; i<s.length(); i++)
        {
            int l1=expandFromCenter(s,i,i);     //odd length
            int l2=expandFromCenter(s,i,i+1);   //even length
            int l=max(l1,l2);
            if (l> end - start) {
                start = i - (l - 1) / 2;
                end = i + l/2;
            }
        }
        return s.substr(start,end-start+1);
    }
private:
    int expandFromCenter(const string& s, int left, int right)
    {
        while(left>=0 && right<s.length() && s[left]==s[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
};