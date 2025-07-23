// LeetCode Problem: Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0, minPrice=prices[0];
        for(auto i:prices)
        {
           if(minPrice>i)
            minPrice=i;
           else
              maxProfit=max(maxProfit,i-minPrice);
        }
        return maxProfit;
        
    }
};