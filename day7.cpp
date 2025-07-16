//day7
//https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        int x1=x;
        int c=0;
        long int res=0;
        while(x1)
        {
            x1/=10;
            c++;
        }
        while(x){
            res+=(x%10)*pow(10,c-1);
            c--;
            x/=10;
        }
        long int a=pow(-2,31);
        long int b=pow(2,31)-1;
        if(res>b || res<a)
            return 0;
        return res;
    }
};