#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int p=n;
    for(int x=0;x<n;x++){
        int yn=1;
        for(int y=n;y>x;y--){
            cout<<yn<<" ";
            yn++;
        }
        for(int t=0;t<x;t++){
            cout<<"*"<<" ";
        }
        for(int t=0;t<x;t++){
            cout<<"*"<<" ";
        }



        yn=p;
        for(int b=n;b>x;b--){
            cout<<yn<<" ";
            yn--;
        }
        p--;

        cout<<"\n";
    }

    return 0;
}