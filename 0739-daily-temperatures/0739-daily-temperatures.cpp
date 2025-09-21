class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tempr) {
        int size = tempr.size();
        vector<int> ans(size, 0);
        stack<int> st; // store indices
        for(int x = size - 1; x >= 0; x--) {
            while(!st.empty() && tempr[st.top()] <= tempr[x]) st.pop();
            if(!st.empty()) ans[x] = st.top() - x;
            st.push(x);
        }
        return ans;
    }
};
