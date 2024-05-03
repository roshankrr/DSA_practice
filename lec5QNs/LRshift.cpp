#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number";
    cin>>a;
    b=a<<1;   //this is left shift  e.g. 4=100   left shift= 1000
    c=a>>1;   //this is Right shift e.g. 4=100 right shift=10
    cout<<b<<endl;
    cout<<c;
    return 0;
}
//here see what happens look
//in this in left shift its been shifted to left single bit because you have given 1 
