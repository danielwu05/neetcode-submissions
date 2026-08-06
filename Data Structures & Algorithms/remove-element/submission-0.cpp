class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, gap = 0;
        for( int i = 0; i< nums.size(); i++) {
            if (nums[i] == val) {
                gap++;
                continue;
            }
            nums[i-gap] = nums[i];
            k++;
        }
        return k;
        
    }
};