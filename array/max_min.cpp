#include <iostream>
#include <limits.h>
using namespace std;
int Findmax(int array[], int size)
{
    int maxi = INT_MIN;
    for (int x = 0; x < size; x++)
    {
        maxi = max(maxi, array[x]);
    }
    return maxi;
}
int Findmin(int array[], int size)
{
    int maxi = INT_MAX;
    for (int x = 0; x < size; x++)
    {
        maxi = min(maxi, array[x]);
    }
    return maxi;
}
int main()
{
    int array[100], size;
    cout << "enter the size of the array " << endl;
    cin >> size;

    for (int x = 0; x < size; x++)
    {
        cin >> array[x];
    }

    int maximum = Findmax(array, size);
    cout <<'maximum is '<< maximum<<endl;
    int minimum = Findmin(array, size);
    cout <<'minimum is '<< minimum;

    return 0;
}