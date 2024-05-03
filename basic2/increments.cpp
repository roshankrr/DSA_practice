#include <iostream>
using namespace std;
int main(){ 
    int a,b,c;
    a=1;
    b=a++;
    c=++a;
    cout<<b;
    cout<<c;
    return 0;
}