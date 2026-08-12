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
    int ans=0;
    vector<int>v;
    int countdfs(TreeNode* root)
    {
        if(root==nullptr)return 0;
        if(ans>1)return 2;

        int lefth = countdfs(root->left);
        lefth++;
        
        int righth = countdfs(root->right);
        righth++;

        ans=abs(lefth-righth);
        v.push_back(ans);
     

        return max(lefth,righth);
    }


    bool isBalanced(TreeNode* root) {
        
        TreeNode* temp=root;
        countdfs(root);

        for(auto i:v)
        {
            if(i>1)
            return false;
        }

        return true;
    }
};
