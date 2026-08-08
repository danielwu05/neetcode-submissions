class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);
        vector<int> ans(nums.size());
        prefix[0] = nums[0];
        suffix[nums.size()-1] = nums[nums.size()-1];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] * nums[i];
            suffix[nums.size()-1-i] = suffix[nums.size()-i] * nums[nums.size()-1-i];
        }
        ans[0] = suffix[1];
        ans[nums.size()-1] = prefix[nums.size()-2];

        for (int i = 2; i <= nums.size()-1; i++) {
            ans[i-1] = prefix[i-2] * suffix[i]; 
        }
        return ans;
    }
};
