#include <iostream>
using namespace std;
int factorial(int arr[],int size){
    int fac=1;
    while(size>0){
        fac=fac*arr[size-1];
        size--;
    }
    // cout<<fac;
    return fac;
}
int main(){
    int arr[]={1,2,3,4,5};
    int fac=factorial(arr,5);
    cout<<fac;

    // cout<<fac;
    return 0;
}