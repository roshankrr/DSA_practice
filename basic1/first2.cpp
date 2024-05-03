#include <iostream>
using namespace std;
int main(){ 

//int has 4 byte
//char has 1 byte
//float has 8 byte
//double has 8 byte
//you can check these size using this sizeof function okey
    int a='a';     //this is allow only for char it takes its ascii value saved in a
    int size=sizeof(a);
    cout<< a << endl;
    cout<< size<<endl;
    char n=99;
    
    printf("this is its value %d and this is its char %c \n",n,n);
    cout<<"this is the type casting of 99 in char:-"<< n << endl;
    return 0;
}