class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int save;
        if (s.size() % 2 == 1) return false;

        for (int i = 0; i < s.size(); i++) {
            if ((s[i] == '}' || s[i] == ')' || s[i] == ']') && stack.size() > 0) {
                int value = stack.top();
                stack.pop();
                if ((value == '{' && s[i] == '}') ||(value == '(' && s[i] == ')') ||(value == '[' && s[i] == ']')) {
                    continue;
                }
                else {
                    return false;
                }
            }
            stack.push(s[i]);
        }
        if (stack.size() > 0) return false;
        return true;
    }
};
