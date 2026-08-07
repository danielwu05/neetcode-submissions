class Solution {
public:
    bool isAnag (string a, string b) {
        if (a.size() != b.size()) {
            return false;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> map;
        vector<vector<string>> solution;
        int index = 0;
        for (int i = 0; i < strs.size(); i++) {
            string copy = strs[i];
            sort(copy.begin(), copy.end());
            if (map.contains(copy)) {
                solution[map[copy]].push_back(strs[i]);
                continue;
            }
            solution.push_back({});
            solution[index].push_back(strs[i]);
            map[copy] = index;
            index++;
        }
        return solution;
    }
};