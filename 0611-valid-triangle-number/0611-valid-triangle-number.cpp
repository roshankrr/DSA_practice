class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=size-1;i>0;i--){
            int left=0;
            int k=i-1;
            while(k>left){
                if((nums[left]+nums[k])>nums[i]){
                    // cout<<nums[left]<<" "<<nums[k]<<" "<<nums[i]<<endl;
                    count += k-left;
                    k--;
                }
                else left++;
            }
        }
        return count;
    }
}; 

// 2 3 4 4 