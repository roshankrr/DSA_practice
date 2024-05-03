#include <iostream>
using namespace std;
int main(){ 

    int ch;
    ch=cin.get();
    if(ch>=65 && ch<91){
        cout<<"its uppercase"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"its lowercase" <<endl;
    }
    else if(ch>=48 &&ch<=57){
        printf("its numeric");
    }
    else{
        printf("its something else");
    }
    return 0;
}