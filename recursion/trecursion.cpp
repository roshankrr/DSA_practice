#include <iostream>
using namespace std;

void rec(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    rec(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    rec(n);
    return 0;
}