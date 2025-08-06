// LeetCode Problem: fruits-into-baskets-ii
// https://leetcode.com/problems/fruits-into-baskets-ii/
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        set<int> bkt;
        for(int i=0; i<fruits.size(); i++)
        {
            for(int j=0; j<baskets.size(); j++)
            {
                auto it=bkt.find(j);
                if(fruits[i]<=baskets[j] && it==bkt.end())
                {
                    bkt.insert(j);
                    n--;
                    break;
                }
            }
        }
        return n;
    }
};