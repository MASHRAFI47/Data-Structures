class Solution {
public:
    int freq[100005] = {0}; 
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int digit = nums[i];
            freq[digit]++;
        }

        int num = -1;
        for(int i = 0; i < 100005; i++) {
            if(freq[i] > 1) {
                num = i;
            }
        }
        return num;
    }
};