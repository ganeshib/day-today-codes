/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
               ListNode* ptr1=headA;
        ListNode* ptr2=headB;
        int count1=0,count2=0;
        while(ptr1!=NULL)
        {
            ptr1=ptr1->next;
            count1++;
        }
        while(ptr2!=NULL)
        {
             ptr2=ptr2->next;
            count2++;
        }
        ptr1=headA;
        ptr2=headB;
        if(count1>count2)   count1-=count2; 
        else
        {
            count1=count2-count1;
            ptr1=headB;
            ptr2=headA;
        }
          while(count1--)
           {
               ptr1=ptr1->next;
               if(ptr1==NULL)   return NULL;
           }
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1==ptr2)  return ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        
        }
        
          return NULL; 
    }
};
