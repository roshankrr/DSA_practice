class Solution {
public:
    string decodeString(string s) {
        stack<pair<int,string>>st;
        string temp="";
        int digit=0;
        for(auto it:s){
            if(isdigit(it)){
                digit+=digit*10+(it-'0');
            }
            if(isalpha(it)){
                temp+=it;
            }
            if(it=='['){
                st.push({digit,temp});
                temp="";
                digit=0;
            }
            if(it==']'){
                auto [prevdigit,prevstr]=st.top();
                st.pop();
                string str="";
                while(prevdigit--){
                    str+=temp;
                }
                temp=prevstr+str;
            }
        }
        return temp;
    }
};