class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) return false;
        stack<char> stack;
        int save;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{') stack.push('}');
            else if (s[i] == '[') stack.push(']');
            else if (s[i] == '(') stack.push(')');
            else if (stack.empty() || stack.top() != s[i]) return false;
            else stack.pop();
        }
        if (stack.size() > 0) return false;
        return true;
    }
};
