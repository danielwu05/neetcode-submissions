class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> char_s(26);
        vector<int> char_t(26);

        for (int i = 0; i < s.size(); i++) {
            char_s[s[i] - 'a']++;
            char_t[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (char_s[i] != char_t[i]) {
                return false;
            }
        }
        return true;
    }
};
