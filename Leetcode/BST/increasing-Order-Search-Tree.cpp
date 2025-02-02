//https://leetcode.com/problems/increasing-order-search-tree/description/

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
    TreeNode* newRoot = NULL;
    TreeNode* current = NULL;
    void inOrder(TreeNode* root) {
        if(root == NULL) {
            return;
        }

        inOrder(root->left);
        if(newRoot == NULL) {
            newRoot = new TreeNode(root->val);
            current = newRoot;
        }
        else {
            current->right = new TreeNode(root->val);
            current = current->right;
        }
        inOrder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        inOrder(root);
        return newRoot;
    }
};