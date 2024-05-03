#include <iostream>
using namespace std;
int tower_of_hanoi(int num,char a,char b,char c){
    if (num == 1) {
        cout << "Move disk 1 from "<<a<<" to "<<c<<endl;
        return 0;
    }
    tower_of_hanoi(num-1,a,c,b);
    cout<<"move disk "<<num<< " from "<<a<<" to "<<c<<endl;;
    tower_of_hanoi(num-1,b,a,c);
}

int main(){
    int num=4;
    tower_of_hanoi(num,'A','B','C');
    return 0;
}