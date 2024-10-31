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
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int currnum = 0;
        int currcnt = 0;
        int currmax = 0;
        TreeNode *node = root;
        while (node != nullptr) {
            while (node->left != nullptr) {
                // find frd
                TreeNode *frd = node->left;
                while (frd->right != nullptr) frd = frd->right;
                frd->right = node;
                TreeNode *prev = node;
                node = node->left;
                prev->left = nullptr;
            }

            int num = node->val;
            if (num == currnum) {
                currcnt++;
            } else {
                currcnt = 1;
                currnum = num;
            }

            if (currcnt > currmax) {
                currmax = currcnt;
                ans.clear();
            }

            if (currcnt == currmax) {
                ans.push_back(currnum);
            }

            node = node->right;
        }
        return ans;
    }
};
