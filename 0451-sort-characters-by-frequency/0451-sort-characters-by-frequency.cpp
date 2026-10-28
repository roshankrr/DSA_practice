class Solution {
public:

    static bool compare(pair<char,int>a,pair<char,int>b){
        if(a.second!=b.second)return a.second>b.second;
        return a.first<b.first;
    }


    string frequencySort(string s) {
        int size=s.size();
        map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<char,int>>v;
        for(auto it:mp){
            v.push_back({it.first,it.second});
        }

        sort(v.begin(),v.end(),compare);
        string ans="";
        for(auto it:v){
            cout<<it.first<<" "<<it.second<<endl;
            ans += string(it.second, it.first); 
        }
        return ans;

    }
};