//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/

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
    TreeNode* convert(vector<int>&nums, int l, int r) {
        if(l > r) {
            return NULL;
        }
        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        TreeNode* leftRoot = convert(nums, l, mid-1);
        TreeNode* rightRoot = convert(nums, mid+1, r);
        root->left = leftRoot;
        root->right = rightRoot;

        return root;
    };
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = convert(nums, 0, nums.size()-1);
        return root;
    }
};