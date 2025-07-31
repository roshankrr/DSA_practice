class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;
        for(auto it:strs){
            string s=it;
            sort(s.begin(),s.end());
            ans[s].push_back(it);
        }
        vector<vector<string>>ret;
        for(auto it:ans){
            ret.push_back(it.second);
        }
        return ret;
    }
};