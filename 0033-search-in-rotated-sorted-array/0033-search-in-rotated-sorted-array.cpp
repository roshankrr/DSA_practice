class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        int i=0,j=size-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target)return mid;
            cout<<nums[mid]<<endl;
            if(nums[mid]>=nums[i]){
                if(target>=nums[i] and target <nums[mid])j=mid-1;
                else i=mid+1;
            }
            else{
                if(target>nums[mid] and target <= nums[j])i=mid+1;
                else j=mid-1;
            }
        }
        return -1;
    }
};