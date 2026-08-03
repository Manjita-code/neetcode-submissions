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
        
        if(head->next==nullptr && n==1)return nullptr;
        if(head->next==nullptr && n>1) return head;

        ListNode* temp=head;
                
        int i=0;
        while(temp!=nullptr)
        {
            temp=temp->next;
            i++;
        }
        int del= i-n+1;
        cout<<del;
        
        
        ListNode* temp1=head;
        ListNode* pre=nullptr;

        //when head is need to delete 
        if(del==1)
        {
            head=head->next;
            return head;
        }

      
        int x=1;
        while(temp1!=nullptr)
        {
           if(x==del)
           {
            pre->next=temp1->next;
            temp1->next=nullptr;
           }
           else
           {
           pre=temp1;
           temp1=temp1->next;           
           }
           x++;
        }
       
        return head;

        
    }
};
