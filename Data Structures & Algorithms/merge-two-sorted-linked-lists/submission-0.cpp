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
      
       if(list1==nullptr )return list2;
       if(list2==nullptr )return list1;
       
       
       ListNode* cur ;
       ListNode* temp1;
       ListNode* temp2;
       
       if(list1->val<=list2->val)
       {
        cur=list1;
        temp1=list1->next;
        temp2=list2;
       }
       else
       {
        cur=list2;
        temp1=list1;
        temp2=list2->next;
       }
       ListNode* dummy = cur ;
    
       while(temp1!= nullptr && temp2!=nullptr)
       {
        if(temp1->val <= temp2->val)
        {
            cur->next=temp1;
            temp1=temp1->next;
            cur=cur->next;
           
        }
        else
        {
            cur->next=temp2;
            temp2=temp2->next;
            cur=cur->next;
        }
       } 

       if(temp1)
       {
        cur->next=temp1;
       }
       if(temp2)
       {
        cur->next=temp2;
       }

       return (list1->val<=list2->val)?list1:list2;       
    }
};
