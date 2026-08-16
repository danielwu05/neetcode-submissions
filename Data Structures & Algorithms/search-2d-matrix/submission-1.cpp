class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left_r = 0, right_r = matrix.size()-1, mid_r = left_r + (right_r - left_r)/2;
        int left_c = 0, right_c = matrix[0].size()-1, mid_c = left_c + (right_c - left_c)/2;
        
        while(left_r <= right_r) {
            if (matrix[mid_r][left_c] > target ) right_r = mid_r - 1;
            else if (matrix[mid_r][right_c] < target ) left_r = mid_r + 1;
            else break;
            mid_r = left_r + (right_r - left_r)/2;
        }
        if (left_r > right_r) return false;
        while(left_c <= right_c) {
            if (matrix[mid_r][mid_c] > target ) right_c = mid_c - 1;
            else if (matrix[mid_r][mid_c] < target ) left_c = mid_c + 1;
            else return true;
            mid_c = left_c + (right_c - left_c)/2;
        }
        return false;
    }
};
