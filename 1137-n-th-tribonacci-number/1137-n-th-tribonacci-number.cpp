class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;
        if(n==3)return 2;
        int first=0;
        int second=1;
        int third=1;
        while(n-3){
            int temp=first+second+third;
            first=second;
            second=third;
            third=temp;
            n--;
        }
        return first+second+third;
    }
};