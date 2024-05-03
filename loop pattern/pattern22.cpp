//triangle this is nice one
#include <iostream>
using namespace std;
int main(){ 
    int n,x=0; 
    cout<<"enter the value \n";
    cin>>n;
    int nu=1;
    
    while(x<n){
        int t=0;
        while(t<x){  
            cout<<" "<<" ";
            t++;
            
        }
        t=n;
        while(t>x){
            cout<<nu<<" ";
            t--;
            nu++;
        }
        cout<<endl;
        x++;
        
    }
    return 0;
}
/*
1 2 3 4
  5 6 7
    8 9
     10
*/