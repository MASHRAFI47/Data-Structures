//https://leetcode.com/problems/range-sum-of-bst/description/

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
    int sum = 0;
    void level_order(TreeNode* root, int low, int high) {
        queue<TreeNode *> q;
        if(root) q.push(root);

        while(!q.empty()) {
            TreeNode* p = q.front();
            q.pop();

            if(p->val >= low && p->val <= high) {
                sum += p->val;
            }

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        level_order(root, low, high);
        return sum;
    }
};