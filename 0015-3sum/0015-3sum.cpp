class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int x=0;x<size;x++){
            while(x>0 and x<size and nums[x]==nums[x-1])x++; //skip duplicated
            int y=x+1,z=size-1;
            while(y<z){
                int sum=nums[x]+nums[y]+nums[z];
                if(sum==0){
                    vector<int>temp={nums[x],nums[y],nums[z]};
                    ans.push_back(temp);
                    y++;
                    z--;

                    while(y<z and nums[y]==nums[y-1])y++; //skip duplicated
                    while(z>y and nums[z]==nums[z+1])z--; //skip duplicated
                }
                else if(sum<0)y++;
                else z--;
                
            }

        }
        return ans;
    }



    // -4 -1 -1 0 1 2

    // int solve(){
    //     //this is  little better solution then o(n3) because this was runnign in o(n2)
    //     int size=nums.size();
    //     set<vector<int>>hashset;
    //     for(int x=0;x<size;x++){
    //         unordered_set<int>us;
    //         for(int y=x+1;y<size;y++){
    //             int k=0-(nums[x]+nums[y]);
    //             if(us.find(k)!=us.end()){
    //                 vector<int>temp={nums[x],nums[y],k};
    //                 sort(temp.begin(),temp.end());
    //                 hashset.insert(temp);
    //             }
    //             us.insert(nums[y]);
    //         }
    //     }
    //     vector<vector<int>>ans={hashset.begin(),hashset.end()};
    //     return ans; 
    // }
};