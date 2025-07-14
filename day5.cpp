//day-5
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
       // int i=0;
        ListNode *tp=head;
        while(tp)
        {
            v.push_back(tp->val);
            tp=tp->next;
        }
        int num=0,p=0;
        int n=v.size();
        for(int j=n-1; j>=0; j--)
        {
            num+=pow(2,p)*v[j];
            p++;
        }
        return num;
    }
};