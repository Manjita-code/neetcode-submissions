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

        if(root->val >= x)ans=1;

        x = max(x,root->val);

        ans+= countNodes(root->left,x);
        ans+= countNodes(root->right,x);
        return ans;
    }

 
    int goodNodes(TreeNode* root) {

        
       if(root == nullptr)return 0;

       int ans =countNodes(root,root->val);
       return ans;
       
    }
};
