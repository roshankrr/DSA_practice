class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int slow=0;
        for(int fast=0;fast<size;fast++){
            if(nums[fast] !=0){
                swap(nums[slow],nums[fast]);
                slow++;
            }
        }
        
    }
};