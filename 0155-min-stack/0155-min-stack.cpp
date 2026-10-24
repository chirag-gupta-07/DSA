class MinStack {
    stack <int> st;
    stack <int> helper;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            helper.push(value);
        }else{
            int ele = min(helper.top(),value);
            helper.push(ele);
        }
        st.push(value);
    }
    
    void pop() {
        st.pop();
        helper.pop();
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