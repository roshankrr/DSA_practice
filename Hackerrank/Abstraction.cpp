#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void virtual getdata(){
        cout<<"hello";
    }
    void virtual putdata(){
        cout<<"hehe";
    }

};
int stu_id=1;
int value=1;
class Professor:public Person{
        public:
    int publications;
    // cur_id++;
    Professor(){
        
    }
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<value<<endl;
        value++;
    }
    
};
class Student:public Person{
    public:
    int marks[6];
    
    Student(){

    }
    void getdata(){
        cin>>name>>age;
        for(int x=0;x<6;x++){
            cin>>marks[x];
        }
    }
    void putdata(){
        cout<<name<<" "<<age<<" ";
        int sum=0;
        for(int x=0;x<6;x++){
            sum=sum+marks[x];
        }
        cout<<sum<<" "<<stu_id<<endl;
        stu_id++;
    }
};

