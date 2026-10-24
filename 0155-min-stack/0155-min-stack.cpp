class MinStack {
    stack <int> st;
    stack <int> helper;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty() || helper.top()>=value){
            helper.push(value);
        }
        st.push(value);
    }
    
    void pop() {
        if(st.top() == helper.top()){
            helper.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return helper.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */