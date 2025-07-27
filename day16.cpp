// LeetCode 6. ZigZag Conversion
// https://leetcode.com/problems/zigzag-conversion/

class Solution {
public:
    string convert(string s, int numRows) {
        int len=s.length();
        if(numRows==1 || numRows>=len)
            return s;
        vector<string> r(numRows);
        int currow=0;
        bool down=false;
        for(char c: s)
        {
            r[currow]+=c;
            if (currow == 0 || currow == numRows-1) 
                down=!down;
            if(down)
                currow+=1;
            else
                currow-=1;
        }
        string res;
        for(auto i:r)
        {
            res+=i;
        }
        return res;
    }
};