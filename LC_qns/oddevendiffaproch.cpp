#include <iostream>
using namespace std;
int main(){ 

    int num;
    cin>>num;
    if(num&1){//yaha p ky hora h dekh
    //lets say num=5----mtlb 101 ab agr 101&1 hoga to 1 and 1 =1 means true
    //or for odd number the rightmax always be 1
        cout<<"odd number";
    }
    else{
        cout<<"even";
    }
    return 0;
}