class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size=nums.size();
        int i=0,j=size-1;
        if(size==1)return i;
        if(i+1<=j and nums[i]>nums[i+1])return i;
        if(j-1>=i and nums[j]>nums[j-1])return j;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1])return mid;
            if(nums[mid]>=nums[mid+1])j=mid;
            else i=mid+1;
        }
        return nums[0];
    }
};