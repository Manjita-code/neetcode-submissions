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


    ListNode* createNode(int val)
    {
       return new ListNode(val); 
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *temp1=l1;
        ListNode *temp2=l2;
        ListNode *pre=l1;

        while(pre->next!=nullptr)
        {
            pre=pre->next;
        }

        int carry=0;
        int digit=0;

        while(temp1!=nullptr && temp2!=nullptr)
        {
              int add = temp1->val+temp2->val+carry;

              if(add>9)
              {
                carry=add/10;
                digit=add%10;
              }
              else
              {
                carry=0;
                digit=add;
              }
              temp1->val=digit;
              temp1=temp1->next;
              temp2=temp2->next;
        }

        if(temp1!=nullptr)
        {
            while(temp1!=nullptr)
            {
                
             int add = temp1->val+carry;

              if(add>9)
              {
                carry=add/10;
                digit=add%10;
              }
               else
              {
                carry=0;
                digit=add;
              }
              temp1->val=digit;
              temp1=temp1->next;
            }
        }

        if(temp2!=nullptr)
        {
            while(temp2!=nullptr)
            {
                
             int add = temp2->val+carry;

              if(add>9)
              {
                carry=add/10;
                digit=add%10;
              }
               else
              {
                carry=0;
                digit=add;
              }
              ListNode* node =createNode(digit);
              pre->next=node;
              pre=pre->next;
              temp2=temp2->next;
            }
        }

        
            if(temp1==nullptr && temp2==nullptr && carry!= 0)
            {
                ListNode* node =createNode(carry);
                pre->next=node;
                pre=pre->next;
            }

        return l1;
        
    }
};
