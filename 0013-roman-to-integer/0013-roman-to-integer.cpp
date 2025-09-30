class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>um;
        um.insert({'I',1});
        um.insert({'V',5});
        um.insert({'X',10});
        um.insert({'L',50});
        um.insert({'C',100});
        um.insert({'D',500});
        um.insert({'M',1000});
        int ans=0,prev=INT_MAX;
        for(char it:s){
            if(um.find(it)!=um.end()){
                if(um[it]<=prev){
                ans+=um[it];
                prev=um[it];
                }
                if(um[it]>prev){
                    ans-=prev;
                    ans+=(um[it]-prev);
                    prev=um[it];
                }
            }
        }
        return ans;
    }
};