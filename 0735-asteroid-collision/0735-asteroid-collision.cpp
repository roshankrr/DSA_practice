class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
    int size=arr.size();
    vector<int>ans;
    stack<int>st;
    for(int i=0;i<size;i++){
        int alive=1;
        while(!st.empty() and st.top()>0 and arr[i]<0){
            if(st.top()< -arr[i]){
                st.pop();
                continue;
            }
            else if(st.top()== -arr[i]){
                st.pop();
            }
            alive=0;
            break;
        }
        if(alive==1){
            st.push(arr[i]);
        }
    }
    while(!st.empty()){
        int top=st.top();
        st.pop();
        ans.push_back(top);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};