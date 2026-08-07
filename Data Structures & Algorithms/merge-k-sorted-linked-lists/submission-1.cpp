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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> v;

        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp=lists[i];

            while(temp!=nullptr)
            {
                int a=temp->val;
                v.push_back(a);
                temp=temp->next;
            }
        }

        if(v.empty())return nullptr;
        sort(v.begin(),v.end());
        ListNode* merge=createNode(v[0]);
        ListNode* head=merge;

        for(int i=1;i<v.size();i++)
        {
            merge->next= createNode(v[i]);
            merge=merge->next;
        }
       
        return head;
        
    }
};
