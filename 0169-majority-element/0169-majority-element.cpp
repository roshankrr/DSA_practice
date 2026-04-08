class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        for(auto it:nums){
            if(um.find(it)!=um.end()){
                um[it]++;
            }
            else{
                um.insert({it,1});
            }
        }
        int largest=0,indx=0;
        for(auto it:um){
            if(it.second>=largest)largest=it.second,indx=it.first;
        }
        return indx;
    }
};