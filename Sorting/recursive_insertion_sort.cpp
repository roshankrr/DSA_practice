#include <vector>
#include <iostream>
using namespace std;

void Insertion_Sort(vector<int> &arr,int pointer){
    //base case
    if(arr[pointer]>=arr[pointer-1]){
        return;
    }
    //recursive case
    
    
// 54321
// 45321
// 34521
// 23451
// 12345

}

int main() {
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);


    Insertion_Sort(arr,0);

    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}