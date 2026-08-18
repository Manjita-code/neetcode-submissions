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

   void dfsA(TreeNode* root, int level)
   {
    if(root==nullptr)return;

    if(level==v.size())v.push_back(root->val);

    dfsA(root->right,level+1);
    dfsA(root->left,level+1);
   }
    
    vector<int> rightSideView(TreeNode* root) {
        
        dfsA(root,0);

        return v;
    }
};
