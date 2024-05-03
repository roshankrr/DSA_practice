#include <iostream>
using namespace std;
int main(){ 

    int n,x=0,b=1; 
    cout<<"enter the value \n";
    cin>>n;

    while(x<n){
        int t=0;
        while(t<n){  
            cout<<b <<" ";
            t++;
            b++;
        }
        cout<<endl;
        x++;
    }
    return 0;
}