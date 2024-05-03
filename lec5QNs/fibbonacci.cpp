#include <iostream>
using namespace std;
int main(){
    int num,a=0,b=1,c=0;
    cout<<"enter the term upto you want"<<endl;
    cin>>num;
    while(num--){
        c=a+b;
        cout<<a<<endl;;
        a=b;
        b=c;
    }
    return 0;
}

// 0112358..