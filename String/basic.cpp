#include <iostream>
using namespace std;
#include <string>
int main(){

    string name="hello world";
    char last=name.back();
    cout<<last<<endl;
    cout<<name<<endl;
    int array[10]={3,4,5};
    // fill(array,array+8,4);
    cout<<array[9];
    return 0;
}