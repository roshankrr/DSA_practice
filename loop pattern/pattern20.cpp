//triangle this is nice one
#include <iostream>
using namespace std;
int main(){ 
    int n,x=0; 
    cout<<"enter the value \n";
    cin>>n;
    
    while(x<n){
        int t=n;
        while(t>x+1){  
            cout<<" "<<" ";
            t--;
            
        }
        t=0;
        while(t<=x){
            cout<<x+1<<" ";
            t++;
        }
        cout<<endl;
        x++;
        
    }
    return 0;
}