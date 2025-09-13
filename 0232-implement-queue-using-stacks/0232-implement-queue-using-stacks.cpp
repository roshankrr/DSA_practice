class MyQueue {
    stack<int>st;
    stack<int>st2;
public:
    MyQueue() {

    }
    
    void push(int x) {
        while(!st2.empty()){
            int temp=st2.top();
            st2.pop();
            st.push(temp);
        }
        st.push(x);
    }
    
    int pop() {
        while(!st.empty()){
            int temp=st.top();
            st.pop();
            st2.push(temp);
        }
        int ret=st2.top();
        st2.pop();
        return ret;
    }
    
    int peek() {
        while(!st.empty()){
            int temp=st.top();
            st.pop();
            st2.push(temp);
        }
        return st2.top();
    }
    
    bool empty() {
        while(!st2.empty()){
            int temp=st2.top();
            st2.pop();
            st.push(temp);
        }
        return !st.size();
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