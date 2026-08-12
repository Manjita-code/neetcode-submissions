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

    vector<int>A;
    vector<int>B;
    void dfsA(TreeNode* root)
    {
        if(root==nullptr)
        {
            A.push_back(111);
            return;
        }

        A.push_back(root->val);

        dfsA(root->left);
        dfsA(root->right);
    }

    void dfsB(TreeNode* root)
    {
        if(root==nullptr)
        {
            B.push_back(111);
            return;
        }

        B.push_back(root->val);
        
        dfsB(root->left);
        dfsB(root->right);
    }


    bool isSameTree(TreeNode* p, TreeNode* q) {

        dfsA(p);
        dfsB(q);

        for(auto i:A)
        {
            cout<<i<<" ";
        }

        cout<<endl;

        for(auto i:B)
        {
            cout<<i<<" ";
        }

        if(A.size()!=B.size())return false;

        int i=0,j=0;


        while(i<A.size() && j<B.size())
        {
            if(A[i]!=B[j])
            return false;

            i++;
            j++;    
        }       

        return true; 
    }
};
