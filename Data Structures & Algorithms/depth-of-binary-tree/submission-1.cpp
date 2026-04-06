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

    int ans =0;
    int height(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        else
        {
            int left_h = height(root->left);
            int right_h = height(root->right);
            int height = 1+max(left_h , right_h);
            ans = max(ans,height);
            return height;
        }
    }
    int maxDepth(TreeNode* root) {
        height(root);
        return ans;
        
    }
};
