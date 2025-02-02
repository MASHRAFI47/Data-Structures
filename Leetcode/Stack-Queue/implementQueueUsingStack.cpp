class MyQueue {
public:
    stack<int> st;
    int val;
    int peekVal;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> st2;
        
        while(!st.empty()) {
            val = st.top();
            st.pop();
            if(st.empty()) {
                break;
            }
            st2.push(val);
        }

        while(!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }
        
        return val;
    }
    
    int peek() {
        stack<int> st2;
        st2 = st;

        int v;
        while(!st2.empty()) {
            v = st2.top();
            st2.pop();
            if(st2.empty()) {
                break;
            }
        }
        return v;
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */