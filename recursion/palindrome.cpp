#include <iostream>
using namespace std;

void palindrome(string s, int start, int end)

{
    if (start >= end)
    {
        cout << "Palindrome" << endl;
        return;
    }
    if (s[start] != s[end])
    {
        cout << "Not Palindrome" << endl;
        return;
    }
    palindrome(s, start + 1, end - 1);
}

int main()
{
    string s = "malayalam";

    palindrome(s, 0, s.length() - 1);

    // cout << s;

    return 0;
}
