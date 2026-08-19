class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size(),0);
        vector<int>right(height.size(),0);
        int vol = 0;

        for (int i = 1; i < height.size(); i++) {
            left[i] = max(height[i-1], left[i-1]);
            right[height.size()-i-1] = max(height[height.size()-i], right[height.size()-i]);
        }

        for (int i = 0; i < height.size(); i++) {
            int minimum = min(left[i], right[i]);
            if (minimum - height[i] >= 0) {
                vol += minimum - height[i];
            }
        }

        return vol;
    }
};
