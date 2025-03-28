//https://leetcode.com/problems/search-in-a-binary-search-tree/description/

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
    TreeNode* search(TreeNode* &root, int val) {
        if(root == NULL) {
            return NULL;
        }
        if(root->val == val) {
            return root;
        }

        if(val < root->val) {
            return search(root->left, val);
        }
        else {
            return search(root->right, val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* searchedRoot = search(root, val);
        return searchedRoot;
    }
};