//https://leetcode.com/problems/deepest-leaves-sum/description/

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
    int max_height(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        if(root->left == NULL && root->right == NULL) {
            return 1;
        }

        int l = max_height(root->left);
        int r = max_height(root->right);
        return max(l,r)+1;
    }
    int deepestLeavesSum(TreeNode* root) {
        int mxLevel = max_height(root);
        int sum = 0;
        
        queue<pair<TreeNode*, int>> q;
        if(root) q.push({root,1});

        while(!q.empty()) {
            pair<TreeNode*, int> p = q.front();
            q.pop();

            TreeNode* node = p.first;
            int level = p.second;

            if(level == mxLevel) {
                sum += node->val;
            }

            if(node->left) q.push({node->left, level+1});
            if(node->right) q.push({node->right, level+1});
        }

        return sum;
    }
};