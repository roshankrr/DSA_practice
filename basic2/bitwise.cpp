#include <iostream>
using namespace std;
int main(){ 
    //refer notes for better understanding


    int a=2,b=3;  // of u got trouble convert these into bits like 2=10 and then solve accordingly
    cout<<"this is AND :"<<(a&b)<<endl;
    cout<<"this is OR :"<<(a|b)<<endl;
    cout<<"this is NOT :"<<(~a)<<endl;
    cout<<"this is XOR :"<<(a^b)<<endl;            //iska mtlb ki  11 or 00 p 0 dega baki sb p 1 in bits 
    return 0;
}
//this program give you the output -3
/*
because when we do ~2 what happen is>>
we know 2= 10
but in 32 bit oprator
0000 0000 0000 000...  0010=2
when we do ~2 it became like=>
1111 1111 1111 111... 1101=~2
for getting this value we find 2's compliment
for this we find 1's compliment first
left end side 1 shows negitive
1's=0000 0000 0000 000... 0010
2's=1's+1= 0000 0000 0000 000... 0011= ~2 = -3 okey 
*/