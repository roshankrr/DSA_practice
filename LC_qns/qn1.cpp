#include <iostream>
//sum and addition of elements of number
using namespace std;
int main(){ 
    int num,sum=0,product=1;
    cout<<"enter the number";   
    cin>>num;
    for(int i=1;num>0;i++){
        int a=num%10;
        sum+=a;
        product*=a;
        num=num/10;
    }
    cout<<sum<<endl;
    cout<<product;

    
    return 0;
}