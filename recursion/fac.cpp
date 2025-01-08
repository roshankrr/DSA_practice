#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fac(n - 1) + fac(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fac(n) << endl;

    return 0;
}
