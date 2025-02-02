// https://leetcode.com/problems/univalued-binary-tree/description/

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
    bool level_order(TreeNode* root) {
        int val = root->val;

        queue<TreeNode* > q;
        if(root) q.push(root);

        while(!q.empty()) {
            TreeNode* p = q.front();
            q.pop();

            if(p->val != val) {
                return false;
            }

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }

        return true;
    }
    bool isUnivalTree(TreeNode* root) {
        return level_order(root);
    }
};