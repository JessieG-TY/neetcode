class MinStack {
private:
    std::stack<int> stk;
    std::stack<int> minstack;
public:
    MinStack() {}
    
    void push(int val) {
       stk.push(val);
       if (minstack.empty()){
        val = val;
       } else{
        val = min(val, minstack.top());
       }
       minstack.push(val);
    }
    
    void pop() {
        stk.pop();
        minstack.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
       return minstack.top(); 
    }
};
