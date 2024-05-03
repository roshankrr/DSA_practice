#include <iostream>
using namespace std;
int main()
{
    int array[] = {4, 3, 2, 1, 123, 10, 14}, size = 7;
    cout << "The original array is: ";
    for (int x = 0; x < size; x++)
    {
        cout << array[x] << " ";
    }
// selection sort 

for(int x=0;x<size-1;x++){
    int min=x;
    for(int y=x;y<size;y++){
        if(array[min] > array[y]){
            min=y;
        }
    }
    swap(array[min],array[x]);
    
}



    cout << endl
         << "The sorted  array is: ";

    for (int x = 0; x < size; x++)
    {
        cout << array[x] << " ";
    }

    return 0;
}