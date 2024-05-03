
#include <iostream>
using namespace std;
int main(){ 

    int n,x=0; 
    
    cout<<"enter the value \n";
    cin>>n;
    
    while(x<n){
        int t=0;
        char ch='A';
        while(t<n){  
            cout<<ch<<" ";
            t++;
            ch++; //same as 10 bs ye yaha h
        }
        
        cout<<endl;
        x++;
    }
    return 0;
}