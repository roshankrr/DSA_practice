#include <iostream>
using namespace std;
int main(){
    int array[100],size,sum=0;
    cout<<"enter the size"<<endl;
    cin>>size;
    for(int x=0;x<size;x++){
        cin>>array[x];
     }
     
     for(int x=0;x<size;x++){
        sum=sum+array[x];
     }
     cout<<"the sum of the array element is "<<sum;
    return 0;
}