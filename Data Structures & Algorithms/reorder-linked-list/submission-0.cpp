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
    void reorderList(ListNode* head) {

        ListNode* temp =  head;

        vector<int>ord;

        while(temp!=nullptr)
        {
            int a = temp->val;
            ord.push_back(a); 
            temp=temp->next;           
        }
        int n=ord.size();
        // cout<<n;
        int i=0;
        int j=n-1;
        int k=0;
        ListNode* temp1 =  head;
        while(k<n && temp1!=nullptr)
        {
           if(k%2==0)
           {
            temp1->val=ord[i];
            temp1=temp1->next; 
            i++;       
           }
           else
           {
            temp1->val=ord[j];
           
            temp1=temp1->next;
            j--;
           }
            k++;
        }
        
    }
};
