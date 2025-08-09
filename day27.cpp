// LeetCode 21. Merge Two Sorted Lists
// Link: https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)
            return list2;
        if(list2==nullptr)
            return list1;
        ListNode dummy;           // val = 0, next = nullptr
        ListNode* tp = &dummy;    // tp starts at dummy
        while(list1 && list2)
        {
           if(list1->val <= list2->val)
           {
                tp->next=list1;
                tp=tp->next;
                list1=list1->next;
           }else{
                tp->next=list2;
                tp=tp->next;
                list2=list2->next;
           }
        }
        tp->next =list1? list1:list2;   //any thing is remainning
        return dummy.next;
    }
};