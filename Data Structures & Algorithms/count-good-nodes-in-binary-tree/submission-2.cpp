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
  
    int  countNodes(TreeNode* root , int x)
    {
       if(root==nullptr) return 0;

       int ans=0;

       queue<pair<TreeNode*,int>>q;
       q.push({root,x});

       while(!q.empty())
       {

        TreeNode* temp = q.front().first;
        int mx =  q.front().second;
        q.pop();
        
        if(temp->val >= mx) ans++;

        int n =max(mx,temp->val);

        if(temp->left!=nullptr)
        q.push({temp->left,n});

        if(temp->right != nullptr)
        q.push({temp->right,n});

       }

       return ans;
    }

 
    int goodNodes(TreeNode* root) {

        
       if(root == nullptr)return 0;

       int ans =countNodes(root,root->val);
       return ans;

    }
};
