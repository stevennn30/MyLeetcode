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
    vector<int> path;
    vector<string> ans;

    void dfs(TreeNode* node) {
        path.push_back(node->val);
    //leaf node, insert into ans
        if (!node->left && !node->right) {
            string tmp;
            for (int i = 0; i < path.size() - 1; i++) {
                tmp += to_string(path[i]);
                tmp += "->";
            }
            tmp += to_string(path[path.size() - 1]);
            ans.push_back(tmp);
            cout << tmp << endl;
        }
        if (node->left) {
            dfs(node->left);
            path.pop_back();
        }
        if (node->right) {
            dfs(node->right);
            path.pop_back();
        }
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root) dfs(root);
       
        return ans;
    }
};