#include <vector>
#include <iostream>
using namespace std;

void bubbleSort(vector<int> &arr,int low,int high){
    //base case
    if(low>=high){
        return;
    }
    //bubble the largest element to the end
    for(int i =0;i<high;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    bubbleSort(arr,low,high-1);
}


int main() {
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    
    //recursive bubble sort
    //TC of recursive bubble sort is O(n^2)
    //SC of recursive bubble sort is O(n)
    //recursive bubble sort is a stable sort
    //recursive bubble sort is a recursive algorithm

    bubbleSort(arr,0,arr.size()-1);

    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}