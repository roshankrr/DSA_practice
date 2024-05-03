#include <iostream>
using namespace std;
int main(){ 
    //not let me show you how to play with bits
    //we know that 0&1 gives 0 and 1&1 gives 1
    //using this we can take out bit ..see
    int num;//here i create a number
    cin>>num;//taken input
    int bit=0;
    while(num!=0){  //we checked ki khi total number khi zero to nhi ho gyaa
        bit=num&1;// we checked that right most significant digit ky h 
        num=num>>1;//then do right shift taki right most shift ho jai or next digit ai
        cout<<bit;//ab use store kro ya print kro your choice
    }
    return 0;
        
    
    
}