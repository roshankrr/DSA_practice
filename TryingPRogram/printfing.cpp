#include <iostream>
using namespace std;
//binary search
int main(){
    int array[10]={1,2,3,4,6,7,9,10,21,34};
    int search;
    cout<<"enter the number you want to search";
    cin>>search;
    int start=0,end=(sizeof(array)/4)-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(array[mid]==search){
            cout<<"found your element at "<<mid;
            break;
        }
        else if(array[mid]>search){
            end=mid-1;
        }
        else if(array[mid]<search){
            start=mid+1;

        }

    }
    
    return 0;
}