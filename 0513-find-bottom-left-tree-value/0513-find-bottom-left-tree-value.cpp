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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> que;
        int ans = 0;

        que.push(root);
        while (!que.empty()) {
            int step = que.size();
            for (int i = 0; i < step; i++) {
                root = que.front();
                que.pop();
                if (root->left) que.push(root->left);
                if (root->right) que.push(root->right);

                if (i == 0) ans = root->val;
            }
        }
        return ans;
    }
};