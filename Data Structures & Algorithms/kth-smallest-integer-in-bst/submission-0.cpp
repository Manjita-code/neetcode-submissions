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
    void asc(TreeNode* root)
    {
        if(root==nullptr)return ;

        asc(root->left);
        v.push_back(root->val);
        asc(root->right);


    }

    int kthSmallest(TreeNode* root, int k) {

       asc(root);
        return v[k-1];

        
    }
};
