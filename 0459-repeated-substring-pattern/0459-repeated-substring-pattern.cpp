class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string newstring=s+s;
        return newstring.substr(1,newstring.size()-2).find(s)!=-1;
    }
};