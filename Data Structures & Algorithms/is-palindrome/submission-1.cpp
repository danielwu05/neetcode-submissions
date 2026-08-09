class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while (i < j) {
            while(!isalpha(s[i]) && !isdigit(s[i]) && i < s.size()) i++;
            while(!isalpha(s[j]) && !isdigit(s[j]) && j >= 0) j--;
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }

        return true;
    }
};
