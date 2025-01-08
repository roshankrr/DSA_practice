#include <iostream>
using namespace std;
int rev(int arr[], int start, int end)
{
    if (start >= end)
        return 0;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    rev(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, len;
    len = sizeof(arr) / sizeof(arr[0]);
    rev(arr, 0, len - 1);
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}