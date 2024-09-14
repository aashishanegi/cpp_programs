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
    bool hasPathSum(TreeNode* root, int targetSum) {
        // checking tree is null or not
        if(root == NULL)
        {
            return false;
        }
        // condition is if any left or right will null we will break
        if(root -> left == NULL && root -> right == NULL)
        {
            // if targetSum is equal to the value of root
            return targetSum == root -> val;
        }
        // Recursively call for both left and right
        bool leftSum = hasPathSum(root -> left, targetSum - root -> val);
        bool rightSum = hasPathSum(root -> right, targetSum - root -> val);
        // if any left or right have value true then we will return true
        return leftSum || rightSum;
    }
};
