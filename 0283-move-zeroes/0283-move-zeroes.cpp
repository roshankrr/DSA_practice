class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int s=0,y=1;
        for(int i=0;i<size-1;i++){
            if(nums[s]==0 and nums[y]==0){
                y++;
                }
            else{
                if(nums[s]==0){
                swap(nums[s],nums[y]);
                }
                s++;
                y++;
            }
            // for(auto it:nums){
            //     cout<<it<<" ";
            // }
            // cout<<endl;
        }
        // 1 0 0 3 12

    }
};