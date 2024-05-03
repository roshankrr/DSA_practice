//call by values and call by reference  swapping
#include <iostream>
using namespace std;

class swapping{
    int a,b;
    public:
        void getval(){
            int temp;
            cout<<"enter the value of 1st number"<<endl;
            cin>>a;
            cout<<"enter the value of 2nd number"<<endl;
            cin>>b;
            temp=a;
            a=b;
            b=temp;
            cout<<"the value of  a is "<<a<<endl;
            cout<<"and b is "<< b <<endl;
        }
        void getadress( int *a,int *b){
            int temp;
            temp=*a;
            *a=*b;
            *b=temp;
            cout<<"the value of  a is "<<*a<<endl;
            cout<<"and b is "<< *b <<endl;
            

        }


};
int main(){
    swapping s1;
    s1.getval();
    s1.getadress();
    return 0;
}