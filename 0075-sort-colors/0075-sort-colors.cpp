class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        //move 1st to end 
        int slow=0;
        for(int fast=0;fast<size;fast++){
            if(nums[fast] !=1){
                swap(nums[slow],nums[fast]);
                slow++;
            }
        }
        //move 2s to end
        slow=0;
        for(int fast=0;fast<size;fast++){
            if(nums[fast] !=2){
                swap(nums[slow],nums[fast]);
                slow++;
            }
        }
        
    }
};



