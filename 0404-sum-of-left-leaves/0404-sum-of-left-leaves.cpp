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
    void dfs(TreeNode* node, int &ans) {
        if (!node) return;

        if (node->left) {
            if (!node->left->left && !node->left->right) ans += node->left->val;
            dfs(node->left, ans);
        }
        dfs(node->right, ans);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        return ans;
    }
};