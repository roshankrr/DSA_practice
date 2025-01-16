#include <vector>
#include <iostream>
using namespace std;



//merge function
void merge(vector<int> &arr,int low,int mid,int high){
    int i=low;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int low,int high){
//base case
if(low>=high){
    return;
}
//find the mid
int mid=low+(high-low)/2;

//sort the left part
mergeSort(arr,low,mid);

//sort the right part
mergeSort(arr,mid+1,high);

//merge the sorted parts
merge(arr,low,mid,high);
}

int main() {
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    
    //merge sort
    //TC of merge sort is O(nlogn)
    //SC of merge sort is O(n)
    //merge sort is a stable sort
    //merge sort is a divide and conquer algorithm

    //mergeSort
    mergeSort(arr,0,arr.size()-1);

    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}