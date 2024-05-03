//triangle
#include <iostream>
using namespace std;
int main(){ 
    char ch='A';
    int n,x=0; 
    cout<<"enter the value \n";
    cin>>n;
    
    while(x<n){
        int t=0;
        while(t<=x){  
            cout<<ch<<" ";
            t++;
            ch++;//same as 14 bs ye yaha h
        }
        cout<<endl;
        x++;
        
    }
    return 0;
}