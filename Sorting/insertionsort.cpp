#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 4, 6, 2, 1}, size = 5;

    cout << "current array is : \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    //sorting the array
    for(int x=1;x<size;x++){
        int temp=arr[x];
        int j=x-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }

    cout << "sorted array is : \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}