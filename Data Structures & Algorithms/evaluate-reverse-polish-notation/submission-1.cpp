class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operations;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int a = operations.top();
                operations.pop();
                int b = operations.top();
                operations.pop();
                int result = b + a;
                operations.push(result);
            }
            else if (tokens[i] == "-") {
                int a = operations.top();
                operations.pop();
                int b = operations.top();
                operations.pop();
                int result = b - a;
                operations.push(result);
            }
            else if (tokens[i] == "*") {
                int a = operations.top();
                operations.pop();
                int b = operations.top();
                operations.pop();
                int result = b * a;
                operations.push(result);
            }
            else if (tokens[i] == "/") {
                int a = operations.top();
                operations.pop();
                int b = operations.top();
                operations.pop();
                int result = b / a;
                operations.push(result);
            }
            else {
                int val = stoi(tokens[i]);
                operations.push(val);
            }
        }
        return operations.top();
    }
};
