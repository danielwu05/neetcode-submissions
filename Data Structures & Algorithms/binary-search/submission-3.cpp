class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid = left + (right - left)/2;

        while (left <= right) {
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) {
                left = mid + 1;
            }
            if (nums[mid] > target) {
                right = mid - 1;
            }
            mid = left + (right - left)/2;
        }
        return -1;
    }
};
