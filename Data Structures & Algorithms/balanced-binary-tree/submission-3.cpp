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

        int lefth = countdfs(root->left);
        
        int righth = countdfs(root->right);

        ans=abs(lefth-righth);
        v.push_back(ans);
     

        return 1+max(lefth,righth);
    }


    bool isBalanced(TreeNode* root) {
        

        countdfs(root);

        for(auto i:v)
        {
            if(i>1)
            return false;
        }

        return true;
    }
};
