class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int max_l = height[l], max_r = height[r], result = 0;

        if (height.empty()) return 0;
        while (l < r) {
            if (max_r >= max_l) {
                l++;
                max_l = max(max_l, height[l]);
                result += max_l - height[l];
            }
            else {
                r--;
                max_r = max(max_r, height[r]);
                result += max_r - height[r];
            }
        }

        return result;

    }
};
