class Solution {
public:
    bool solve(string &s,int left,int right){
        if(left>=right)return true;
        if(s[left]!=s[right])return false;
        return solve(s,left+1,right-1);
    }

    bool isPalindrome(string s) {
        int size=s.size();
        string ans="";
        for(auto it:s){
            if((it>=48 && it<=57) || (it>=65 && it<=90) || (it>=97 && it<=122))ans+= tolower(it);
        }
        cout<<ans;
        return solve(ans,0,ans.size()-1);
    }
};