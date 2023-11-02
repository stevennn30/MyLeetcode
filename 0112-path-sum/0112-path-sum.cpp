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
    int ans = 0;
    void dfs(TreeNode* node, int& sum, int target) {
        sum += node->val;
        if (!node->left && !node->right) {
            cout << sum << endl;
            if (sum == target) ans = 1;
            return;
        }
 
        if (node->left) {
            dfs(node->left, sum, target);
            sum -= node->left->val;
        }
       
        if (node->right) {
            dfs(node->right, sum, target);
            sum -= node->right->val;
        }
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;
        int sum = 0;
 
        dfs(root, sum, targetSum);
        return ans;
    }
};