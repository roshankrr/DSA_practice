#include <iostream>
using namespace std;
int main(){
  int array[]={10,9,8,7,6,5,4,3,2,1},size=10;
  cout<<"Given array is : \n";
  for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;

//sorted using bubble sorting
// for(int x=0;x<size;x++){
//     int start=0;
//     for(int y=x;y<size-1;y++){
//         if(array[start] > array[start+1]){
//             //swap elements
//             swap(array[start],array[start+1]);
//         }
//         // cout<<array[start]<<" "<<array[start+1]<<" ";
//         start++;
//     }
//     // cout<<endl;
// }


//one more way
for(int x=1;x<size;x++){
    for(int y=0;y<size-x;y++){
        if(array[y] > array[y+1]){
            swap(array[y],array[y+1]);   
        }
    }
}

  cout<<"sorted array is : \n";
  for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;


    return 0;
}