
#include <iostream>
using namespace std;
int main(){ 

    int n,x=0,s=1; 
    cout<<"enter the value \n";
    cin>>n;
    
    while(x<n){
        int t=0;
        while(t<=x){  
            cout<<x-t+1 <<" ";
            t++;
            s++;
        }
        cout<<endl;
        x++;
    }
    return 0;
}