class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int it=0;it<s.size();it++){
            if( s[it]>='a' and s[it]<='z')continue;
            if( s[it]>='0' and s[it]<='9')continue;
            s.erase(s.begin()+it);
            it--;
        }
        int low=0,high=s.size()-1;

        while(low<high){
            if(s[low]==s[high]){
                low++;
                high--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};