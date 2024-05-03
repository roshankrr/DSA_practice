#include <iostream>
using namespace std;

class bank{
    char name[20];
    int accountno;
    int widraw;
    int balance;

    public:
        void initialval()
        {
            cout<<"enter the name of account holder name:"<<endl;
            cin>>name;
            cout<<"enter the account number"<<endl;
            cin>>accountno;
            cout<<"enter the initial amount"<<endl;
            cin>>balance;
        }
         void deposit(){
            cout<<"enter the amount you want to deposit"<<endl;
            int dep;
            cin>>dep;
            balance=balance+dep;
         }

         void widrawl(){
            cout<<"enter tha amount you want to widraw"<<endl;
            cin>>widraw;
            if(widraw<=balance){
                balance=balance-widraw;
            }
            else{
                cout<<"your widrwal amount excedded the balance amount "<<endl;
            }
         }
          void display(){
            cout<<"name of account holder is: "<<name<<endl;
            cout<<"balance amount is "<<balance<<endl;
          }

 };
int main(){
    bank b1;
    b1.initialval();
    b1.deposit();
    b1.widrawl();
    b1.display();
    
    return 0;
}