// LeetCode Problem: Roman to Integer
// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int res=0, prev=0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int curr=roman[s[i]];

            if (curr<prev)
                res-=curr;  // Subtract if smaller than value on the right
            else
                res+=curr;  // Add otherwise

            prev=curr;
        }

        return res;
    }
};
