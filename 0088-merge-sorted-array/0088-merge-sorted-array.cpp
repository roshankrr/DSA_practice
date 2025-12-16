class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=m-1,n2=n-1;              //2 2 
        int size=nums1.size()-1;          // 6
        // cout<<size;
        while(n1>=0 and n2>=0){
            if(nums1[n1]>=nums2[n2])nums1[size]=nums1[n1],n1--,size--;
            else nums1[size]=nums2[n2],n2--,size--;
        }
        cout<<n1<<n2;
        while(n1>=0){
            nums1[size]=nums1[n1],n1--,size--;
        }
        while(n2>=0){
            nums1[size]=nums2[n2],n2--,size--;
        }
    }
};