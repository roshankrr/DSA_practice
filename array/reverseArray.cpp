#include <iostream>
using namespace std;

int printarray(int array[],int size){
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}

int reverse(int array[], int size){
    int start = 0;
    int end = size -1 ;
    while (start <= end) {
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
int main(){

    int array[5]={1,4,2,6,1};
    int arr[6]={65,10,42,3,7,2};

    reverse(array,5);
    reverse(arr,6);

    printarray(array,5);
    cout<<endl;
    printarray(arr,6);
    
    return 0;
}