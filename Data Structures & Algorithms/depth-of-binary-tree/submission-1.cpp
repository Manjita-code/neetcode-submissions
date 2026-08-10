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

    int dfsA(TreeNode* root)
    {
        if(root == nullptr)
        return 0;

        int left=dfsA(root->left);
        // cout<<left<<" --left"<<endl;
        int right=dfsA(root->right);
        // cout<<right<<"  ---right"<<endl; 

        return 1+max(left,right);
             
    }
     

    int maxDepth(TreeNode* root) { 

        int ans=dfsA(root);
        return ans;       
        
    }
};
