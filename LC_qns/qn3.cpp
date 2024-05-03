#include <iostream>
using namespace std;
int main(){ 

    int x=1534236469;
    long long r = 0;
    while(x != 0){
        int v = x % 10;
        r = r * 10 + v;
        x=x / 10;

    }
    cout<<r;
    return 0;
        
}