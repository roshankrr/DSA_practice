#include <iostream>
using namespace std;
//1st rule to perform binary search is we have to take a sorted array only 
int search(int array[],int size,int key){
    int s=0,e=size-1;

    while(s<=e){
        int mid=s+((e-s)/2);  //here the value (s+e)/2 is not a very correct value   lets say if we have 2^31-1 value here both then addition will be out of the range
        if(key>array[mid]){// there for isse bachne k lie we'll do  s+((e-s)/2) ye khel jaigaa
            s=mid+1;
        }
        else if(key<array[mid]){
            e=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;

}
int main(){
    int array[100]={1,2,4,7,10,15,20,25,30,46},key;
    cout<<"enter the term you want to search";
    cin>>key;
    int value=search(array,10,key);
    if(value==-1){
        cout<<"the key was not present";
    }
    else{
        cout<<"the key was found at:"<<value<<" index"<<endl;
    }
    return 0;
}