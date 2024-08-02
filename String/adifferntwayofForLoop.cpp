#include <iostream>
using namespace std;
int main(){
        string r="helLlo";
int count=0;
    for(auto e:r){
        if(e=='l' || e=='L'){
            count++;
        }
        cout<<e<<endl;
    }
    cout<<"number of time L appear is"<<count<<endl;

    return 0;
}