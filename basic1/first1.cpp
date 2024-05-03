#include <iostream>
using namespace std;
int main(){ 
    char a; //same as C
    a='a';
    //this is  a comment same as in C
    /*IN this Code lesson we learn CPP along with C language 
    to compare that these are same together..Oke*/
    printf("%d \n",a); //we can use this in C++ language we can take char and use its ascii as int
    printf("%c \n",a); //this also works in C
    printf("%c \n",a+1);//this add 1 in its ASCII value 97+1=98=b
    printf("hello duniya \n");
    cout<<"hello duniya \n";
    cout<<"hello duniya";
    unsigned int pos=123; //this unsigned keyword only allow positive values for neg it gives a very big value
    cout<<pos<<endl;
    return 0;
}