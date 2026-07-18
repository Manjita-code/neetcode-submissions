class MinStack {
   public:
    stack<int> st;
    stack<int> stk;

    MinStack() {}

    void push(int val) {
        st.push(val);
        if(stk.empty()){
            stk.push(val);
        }
        else
        {
        stk.push(min(val, stk.top()));
        }
    }

    void pop() {
        if (!st.empty()) st.pop();
        if (!stk.empty()) stk.pop();

    }

    int top() {
        if (st.empty()) return -1;

        return st.top();
    }

    int getMin() {
       
        return stk.top();
    }
};
