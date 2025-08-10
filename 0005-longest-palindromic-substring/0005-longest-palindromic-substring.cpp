class Solution {
public:
    string longestPalindrome(string s) {
        int size=s.size();
        string maxstring="";
        if (size==1)return s;
        //odd length string;
        for(int x=1;x<size;x++){
            int left=x-1;
            int right=x+1;
            while( left>=0 and right<size){
                if(s[left]==s[right]){
                    if(maxstring.size()<(right-left+1))maxstring=s.substr(left, right - left + 1);
                    left--;
                    right++;
                }
                else break;
            }
        }

        //even length
        for(int x=0;x<size-1;x++){
            int left=x;
            int right=x+1;
            while( left>=0 and right<size){
                if(s[left]==s[right]){
                    if(maxstring.size()<(right-left+1))maxstring=s.substr(left, right - left + 1);
                    left--;
                    right++;
                }
                else break;
            }
            
        }
        if (maxstring.size() < 1)
                maxstring = s.substr(0,1);

        return maxstring;
    }
};