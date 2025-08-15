class Solution {
public:
    int strStr(string haystack, string needle) {
        int size1=haystack.size();
        int size2=needle.size();
        int indx=-1;
        for(int i=0;i<size1;i++){
            if(haystack[i]==needle[0]){
                for(int j=0;j<size2;j++){
                    if(needle[j]==haystack[i+j]) indx=i;
                    else {indx=-1;
                    break;}
                }
            }
            if(indx!=-1)break;
        }
        return indx;
    }
};