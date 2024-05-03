#include <iostream>
using namespace std;
int main()
{
    int num;
    char a = 'A';
    cout << "enter the value" << endl;
    int b = 1, c = 1;
    cin >> num;
    while (b <= num)
    {
        while (c <= num)
        {
            cout << " "<< a;
            a++;
            c++;
        }
        cout << "\n";
        c = 1;
        b++;
    }
    return 0;
}
