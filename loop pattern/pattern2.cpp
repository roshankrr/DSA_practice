#include <iostream>
using namespace std;
int main(){ 

    int n,x=0;
    cin>>n;
    while(x<n){
        int t=0;
        while(t<n){
            cout<<x+1;
            t++;
        }
        cout<<endl;
        x++;
    }
    return 0;
}