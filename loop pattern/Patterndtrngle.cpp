#include <iostream>
using namespace std;
int main(){ 

    int num;
    cout<<"enter the number of row";
    cin>>num;
    for(int x=1;x<num;x++){
        for(int y=num;y>x;y--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}