class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>>freq;
        unordered_map<int, int> map;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for (auto a : map) {
            freq.push({a.second, a.first});
        }
        
        while (k > 0) {
            auto lmnt = freq.top();
            freq.pop();
            ans.push_back(lmnt.second);
            k--;
        }
        return ans;
    }
};
