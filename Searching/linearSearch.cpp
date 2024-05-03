#include <iostream>
using namespace std;

bool search(int array[],int size,int key){
    for(int x=0;x<size;x++){
        if(key==array[x]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int array[100],size,key;
    cout<<"enter the size of the array";
    cin>>size;
    for(int x=0;x<size;x++){
        cout<<"Enter element "<<x+1<<": ";
        cin>>array[x];
    }
    cout << "Enter the key you want to search";
    cin>>key;
    bool ans=search(array,size,key);
    if(ans){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
    return 0;
}