//https://leetcode.com/problems/leaf-similar-trees/description/

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
    void leaf_nodes(TreeNode* root, vector<int> &v) {
        if(root == NULL) {
            return;
        }

        if(root->left == NULL && root->right == NULL) {
            v.push_back(root->val);
            return;
        }

        leaf_nodes(root->left, v);
        leaf_nodes(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;

        leaf_nodes(root1, v1);
        leaf_nodes(root2, v2);

        if(v1.size() != v2.size()) {
            return false;
        }

        for(int i = 0; i < v1.size(); i++) {
            if(v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    }
};