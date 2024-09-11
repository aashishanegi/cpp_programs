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
private:
    int f(TreeNode* root){
        if(root==nullptr) return 0;

        int lh = 1+f(root->left);
        int rh = 1+f(root->right);

        return max(lh,rh);
    }
public:
    int maxDepth(TreeNode* root) {
        return f(root);
    }
};
