//triangle this is nice one
#include <iostream>
using namespace std;
int main(){ 
    char ch='A';
    int n,x=0; 
    cout<<"enter the value \n";
    cin>>n;
    ch=ch+n-1;
    
    while(x<n){
        int t=0;
        while(t<=x){  
            char ty=ch+t;
            cout<<ty<<" ";
            t++;
            
        }
        cout<<endl;
        x++;
        ch--;
        
    }
    return 0;
}