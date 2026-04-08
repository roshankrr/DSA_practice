class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>us;
        for(int i=0;i<nums.size();i++){
            int num=target-nums[i];
            if(us.find(num)!=us.end()){
                return {us[num],i};
            }
            else{
                us.insert({nums[i],i});
            }
        }
        return {0,0};
    }
};