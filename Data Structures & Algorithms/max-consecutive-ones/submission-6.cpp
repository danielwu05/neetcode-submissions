class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        int streak = 0, current = 0;
        for (int i : nums) {
            if (i == 1) {
                current++;
                streak= max(streak, current);
            }
            else {
                current = 0;
            }
        }
        return streak;
    }
};