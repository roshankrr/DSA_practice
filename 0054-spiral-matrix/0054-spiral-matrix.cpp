class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowstart=0,colstart=0,colend=matrix[0].size()-1,rowend=matrix.size()-1;
        vector<int>ans;
        while(colstart<=colend and rowstart<=rowend){
            for(int i = colstart; i <= colend; i++) {
                ans.push_back(matrix[rowstart][i]);
            }
            rowstart++;

            for(int i=rowstart;i<=rowend;i++){
                ans.push_back(matrix[i][colend]);
            }
            colend--;

            if(rowstart<=rowend){
                for(int i=colend;i>=colstart;i--){
                ans.push_back(matrix[rowend][i]);
                }
                rowend--;

            }

            if(colstart<=colend){
                for(int i=rowend;i>=rowstart;i--){
                    ans.push_back(matrix[i][colstart]);
                }
                colstart++;
            }

        }
        return ans;
    }
};