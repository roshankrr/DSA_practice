#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
      for (int m = 0; m < n; m++) {

    for (int x=0;x<n-m-1;x++){
        cout<<"  ";
    }


    //   cout << endl;
    char word = 'A';
    for (int y = 0; y <= m; y++) {
      cout << word << " ";
      word++;
    }
    word--;

    for (int y = 0; y < m; y++) {
      word--;
      cout << word << " ";
    }
    cout << endl;
  }
    return 0;
}