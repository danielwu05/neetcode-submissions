class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> stack;
        vector<int> result(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stack.empty() && temperatures[i] > temperatures[stack.back()]) {
                int index = stack.back();
                stack.pop_back();
                result[index] = i - index;
            }
            stack.push_back(i);
            
        }
        return result;
    }
};
