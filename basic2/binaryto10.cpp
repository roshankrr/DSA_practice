#include <iostream>
using namespace std;
#include<math.h>
int main(){ 

    // so we need to convert 00101 into  decimal =5  "okey"
    int num;//abhi yha ye as a integer gya hoga like if we give101 to ye binary nhi h decimal wala 101 h
    cout<<"enter the number"<<endl;
    cin>>num;//so we have to seperate with digits
    int i=0;
    int dec=0;
    while(num!=0){
        int digit=num%10;
        dec=dec +pow(2,i)*digit;
        i++;
        num=num/10;
    
    }
    cout<<"decimal is: "<<dec;
    return 0;
}