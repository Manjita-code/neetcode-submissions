/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* createnode(int val)
    {
        return new Node(val);
    }

    Node* copyRandomList(Node* head) {

        if(head == NULL)
            return NULL;

        unordered_map<Node*, Node*> mp;

        Node* copy1 = head;

        
        while(copy1 != NULL)
        {
            mp[copy1] = createnode(copy1->val);
            copy1 = copy1->next;
        }

        copy1 = head;

       
        while(copy1 != NULL)
        {
            mp[copy1]->next = mp[copy1->next];
            mp[copy1]->random = mp[copy1->random];

            copy1 = copy1->next;
        }

        return mp[head];
    }
};









