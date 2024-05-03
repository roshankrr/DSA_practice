#include <iostream>
using namespace std;
int main(){ 
//prime using forloop
    int n,s=2,p;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int x=0;x<n/2;x++){
        if(n%s==0 && n!=s){
            p=0;
            break;
        }
        else{
            s++;
        }
    }
    if(p==0){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    return 0;
}