/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node *ans = root;
        queue<Node*> que;
        if (root) que.push(root);

        while (!que.empty()) {
            Node *next = NULL;
            int step = que.size();
            for (int i = 0; i < step; i++) {
                if (i == 0) {
                    root = que.front();
                    que.pop();
                    if (root->left)que.push(root->left);
                    if (root->right) que.push(root->right);
                } else {
                    root = next;
                }

                if (i != step - 1) {
                    next = que.front();
                    que.pop();
                    if (next->left)que.push(next->left);
                    if (next->right) que.push(next->right);
                    root->next = next;
                } else {
                    root->next = NULL;
                }
            }
        }
        return ans;
    }
};