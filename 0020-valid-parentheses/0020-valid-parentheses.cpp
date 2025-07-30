class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it:s){
            if(it=='(' or it=='[' or it=='{')st.push(it);
            else{
                if(st.empty())return false;
                if((st.top()=='(' and it==')') or (st.top()=='[' and it==']') or (st.top()=='{' and it=='}'))st.pop();
                else return false;
            }
        }
        if(st.empty())return true;
        return false;
    }
};