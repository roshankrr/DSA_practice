#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};


    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}

//in here the auto is for any datatype in the array and x is the variable that will store the value of the array
//the output will be like 1 2 3 4 5 just like python