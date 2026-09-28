class Solution {
public:
    int reverse(int x) {
        if(x==0)return 0;
        int num=x;
        int rev=0;
        while(num){
            if(rev>INT_MAX/10 || rev<INT_MIN/10)return 0;
            int temp=num%10;
            rev=rev*10+temp;
            num=num/10;
        }
        return rev;
    }
};