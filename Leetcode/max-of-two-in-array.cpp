//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) {
            return NULL;
        }
        if(nums.size() == 1) {
            return nums[0];
        }

        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        
        int first = nums[0];
        int second = nums[1];
        int prod = (first-1) * (second-1);
        return prod;
    }
};