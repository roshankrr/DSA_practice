#include <iostream>
using namespace std;
int main(){ 

    int a=1,b=2;
    if(--a>0 || ++b>2 ){ 
//in this the operation only who  runs  get increment or decrement in value not both in OR 
        cout<<"hello"<<endl;
    }
    else{
        cout<<"hn"<<endl;
    }
    cout<<a<<" "<<b;
    return 0;
}