#include <iostream>
using namespace std;
int unique(int array[], int size)
{
    int check[10];
    for(int x=0;x<size;x++){
        int n=0;
        for(int y=0;y<size;y++){
            if(array[x]==check[y]){
                n=1;
                break;
            }
        }
        if(n==0){
        check[x]=array[x];
        cout<<check[x];
        }


    }
}
// finding the unique element in array
int main()
{
    int array[10] = {1, 2, 3, 3, 1, 5, 4, 2};
    unique(array, 8);
    return 0;
}