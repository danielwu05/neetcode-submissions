class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int big = -1;

        for(int i = arr.size()- 1; i >= 0; i--) {
            int curr = arr[i];
            arr[i] = big;
            big = max(big, curr);
        }

        return arr;
    }
};