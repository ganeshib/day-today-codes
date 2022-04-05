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
    
    void sum(ListNode* l1, ListNode* l2,ListNode* cur)
    {
        int carry=0;
        while (l1 || l2 || carry) 
        {
            if (l1) {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                carry += l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode(carry%10);
            cur = cur->next;
            carry /= 10;
        }
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
    ListNode *dummy = new ListNode(0), *cur;
    cur = dummy;
    sum(l1,l2,cur);
    return dummy->next;
    }
};
