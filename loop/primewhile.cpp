#include <iostream>
using namespace std;
int main(){ 
//prime using whileloop
    int n,s=2,p;
    int x=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(x<n/2){
        if(n%s==0 && n!=s){
            p=0;
            break;
        }
        else{
            s++;
            x++;
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