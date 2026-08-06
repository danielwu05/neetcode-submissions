class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int big = arr[arr.size()-1];

        for(int i = arr.size()- 2; i > 0; i--) {
            big = max(big, arr[i]);
            arr[i] = big;
        }
        for (int i = 1; i < arr.size(); i++) {
            arr[i - 1] = arr[i];
        }
        arr[arr.size()-1] = -1;

        return arr;
    }
};