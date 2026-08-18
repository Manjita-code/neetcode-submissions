/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
   
   vector<int>v;

   void bfsA(TreeNode* root, int level)
   {
    if(root==nullptr)return;

    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty())
    {
        int levels=q.size();
        
        for(int i=0;i<levels;i++)
        {
        TreeNode* temp=q.front();
        q.pop();

        if(i==0)v.push_back(temp->val);

        if(temp->right!= nullptr)
        {
            q.push(temp->right);
        }
        if(temp->left!=nullptr)
        {   
            q.push(temp->left);
        }
        }
    }    

   }
    
    vector<int> rightSideView(TreeNode* root) {
        
        // v.clear();
        bfsA(root,0);

        return v;
    }
};
