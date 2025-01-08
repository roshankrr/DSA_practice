#include <iostream>
using namespace std;

void rec(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    rec(n - 1);
}

int main()
{
    int n;
    cin >> n;
    rec(n);
    return 0;
}