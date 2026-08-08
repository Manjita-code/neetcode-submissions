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
    ListNode* reverseKGroup(ListNode* head, int k) {

        vector<int>v;
        ListNode* temp=head;

        while(temp!=nullptr)
        {
        int a = temp->val;
        v.push_back(a);
        temp=temp->next;
        }
        
        int n = v.size();
        
        int j=0;
        while(j+k<=n)
        {
        reverse(v.begin()+j,v.begin()+j+k);
        j=j+k;
        }
        
        // for(auto i:v)
        // {
        //     cout<<i<<" ";
        // }

        ListNode* temp1=head;
        int i=0;
        while(i<n && temp1!=nullptr)
        {
         temp1->val=v[i];
         temp1=temp1->next;
         i++;
        }
    
        return head;
    }
};
