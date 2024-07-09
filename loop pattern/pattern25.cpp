#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the num";
    cin>>n;
        for(int x=0;x<n;x++){
        if(x==0 ||x==(n-1)){
          for (int y = 0; y < n; y++) {
            cout << "*";
          }
        }
        else{
            for(int z=0;z<n;z++){
                if(z==0 ||z==n-1) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}