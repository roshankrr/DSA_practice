class Solution {
public:

    void solve(vector<char>& s,int left,int right){
        if(left>=right)return;
        swap(s[left],s[right]);
        return solve(s,++left,--right);
    }

    void reverseString(vector<char>& s) {
        solve(s,0,s.size()-1);
    }
};