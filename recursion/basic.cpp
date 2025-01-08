#include <iostream>
using namespace std;

void printHello(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    cout << "Hello" << endl;
    printHello(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printHello(n);
    return 0;
}
