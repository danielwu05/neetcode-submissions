class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> operations(tokens.size());
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int a = operations.back();
                operations.pop_back();
                int b = operations.back();
                operations.pop_back();
                int result = b + a;
                operations.push_back(result);
            }
            else if (tokens[i] == "-") {
                int a = operations.back();
                operations.pop_back();
                int b = operations.back();
                operations.pop_back();
                int result = b - a;
                operations.push_back(result);
            }
            else if (tokens[i] == "*") {
                int a = operations.back();
                operations.pop_back();
                int b = operations.back();
                operations.pop_back();
                int result = b * a;
                operations.push_back(result);
            }
            else if (tokens[i] == "/") {
                int a = operations.back();
                operations.pop_back();
                int b = operations.back();
                operations.pop_back();
                int result = b / a;
                operations.push_back(result);
            }
            else {
                int val = stoi(tokens[i]);
                operations.push_back(val);
            }
        }
        return operations.back();
    }
};
