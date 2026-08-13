class Solution {
public:

    bool sameOrNot(TreeNode* p, TreeNode* q)
    {
        queue<TreeNode*> pq;
        queue<TreeNode*> qq;

        pq.push(p);
        qq.push(q);

        while (!pq.empty() && !qq.empty())
        {
            TreeNode* A = pq.front();
            TreeNode* B = qq.front();

            pq.pop();
            qq.pop();

            // Values must match
            if (A->val != B->val)
                return false;

            // Left child structure must match
            if ((A->left == nullptr && B->left != nullptr) ||
                (A->left != nullptr && B->left == nullptr))
                return false;

            // Right child structure must match
            if ((A->right == nullptr && B->right != nullptr) ||
                (A->right != nullptr && B->right == nullptr))
                return false;

            if (A->left != nullptr)
            {
                pq.push(A->left);
                qq.push(B->left);
            }

            if (A->right != nullptr)
            {
                pq.push(A->right);
                qq.push(B->right);
            }
        }

        return true;
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot)
    {
        if (root == nullptr)
            return false;

        // Current node can be the starting point
        if (root->val == subRoot->val)
        {
            if (sameOrNot(root, subRoot))
                return true;
        }

        // Try every node in root
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};
