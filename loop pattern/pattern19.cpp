//triangle this is nice one
#include <iostream>
using namespace std;
int main(){ 
    int n,x=0; 
    cout<<"enter the value \n";
    cin>>n;
    
    while(x<n){
        int t=0;
        while(t<x){  
            cout<<" "<<" ";
            t++;
            
        }
        t=n;
        while(t>x){
            cout<<x+1<<" ";
            t--;
        }
        cout<<endl;
        x++;
        
    }
    return 0;
}
/*
1111
 222
  33
   4
*/