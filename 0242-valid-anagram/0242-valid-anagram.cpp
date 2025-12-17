class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>u1,u2;
        for(auto ch:s)u1[ch]++;
        for(auto ch:t)u2[ch]++;
        return u1==u2;
    }
};