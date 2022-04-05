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
         ListNode* first=list1;
        ListNode* second=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* node=dummy;
        while(first!=NULL && second!=NULL)
        {
            if(first->val<second->val)
            {
                node->next=first;
                first=first->next;
            }else{
                node->next=second;
                second=second->next;
            }
            node=node->next;
        }
        node->next=(first)?first:second;
        return dummy->next;
    }
};
