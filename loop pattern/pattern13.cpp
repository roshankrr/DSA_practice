
#include <iostream>
using namespace std;
int main(){ 
    char ch='A';
    int n,x=0; 
    cout<<"enter the value \n";
    cin>>n;
    
    while(x<n){
        int t=0;
        
        while(t<n){ 
            char mn=ch+t; 
            cout<<mn<<" ";
            t++;
            
        }
        ch++;
        cout<<endl;
        x++;
    }
    return 0;
}