#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int n;
    cout<<"enter the value"<<endl;
    cin>>n;
    int sum=0;

    while (num <= n)
    {
        sum=sum+num;
        num=num+2;
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}