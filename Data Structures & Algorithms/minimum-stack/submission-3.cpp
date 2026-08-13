class MinStack {
private:
    vector<int> stack;
    vector<int> minimum;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (minimum.empty() || val <= minimum.back()) {
            minimum.push_back(val);
        }
        else {
            minimum.push_back(min(minimum[minimum.size()-1], val));
        }

        stack.push_back(val);
    }
    
    void pop() {
        minimum.pop_back();
        stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        int value = minimum.back();
        
        return value;
    }
};
