class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[]={0,0,0};
        int size=nums.size();
        for(auto it:nums){
            if(it==0)count[0]++;
            else if(it==1)count[1]++;
            else count[2]++;
        }
        for(int i=0;i<size;i++){
            if(count[0]>0)nums[i]=0,count[0]--;
            else if(count[1]>0)nums[i]=1,count[1]--;
            else nums[i]=2;
        }
    }
};



