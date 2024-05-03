
#include <iostream>
using namespace std;
int main(){ 

    int n,x=0; 
    char ch='A'; //same as 11 bus ye yaha h
    cout<<"enter the value \n";
    cin>>n;
    
    while(x<n){
        int t=0;
        
        while(t<n){  
            cout<<ch<<" ";
            t++;
            ch++;
        }
        
        cout<<endl;
        x++;
    }
    return 0;
}