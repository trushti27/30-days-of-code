// Day 30: Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* tp=head;
        while(tp){
            l++;
            tp=tp->next;
        }
        if(l==n)
            return head->next;
        int c=1;
        tp=head;
        while(tp)
        {
            if(c==l-n)
                break;
            c++;
            tp=tp->next;
        }
        tp->next=tp->next->next;
        return head;
    }
};