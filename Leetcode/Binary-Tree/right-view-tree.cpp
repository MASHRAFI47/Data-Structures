//https://leetcode.com/problems/binary-tree-right-side-view/description/

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        bool freq[105] = {false};

        queue<pair<TreeNode*, int>> q;
        if(root) q.push({root, 1});

        while(!q.empty()) {
            pair<TreeNode*, int> p = q.front();
            q.pop();

            TreeNode* node = p.first;
            int level = p.second;

            if(freq[level] == false) {
                v.push_back(node->val);
                freq[level] = true;
            }

            if(node->right) q.push({node->right, level+1});
            if(node->left) q.push({node->left, level+1});
        }

        return v;
    }
};