// day8.cpp
// LeetCode Problem: Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int x1=x;
        long int r=0;
        while(x>0){
            int d=x%10;
            r= r*10 + d;
            x/=10;
        }
        if(r==x1)
            return true;
        return false;
    }
};