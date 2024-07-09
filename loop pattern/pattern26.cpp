#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for (int x = 0; x < n; x++) {
    for (int y = x; y < n; y++) {
      cout << "* ";
    }
    for (int y = 0; y < x; y++) {
      cout << "  ";
    }
    for (int y = 0; y < x; y++) {
      cout << "  ";
    }
    for (int y = x; y < n; y++) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int x = 0; x < n; x++) {
    for (int y = 0; y <=x; y++) {
      cout << "* ";
    }
    for (int y = n-1; y > x; y--) {
      cout << "  ";
    }
    for (int y = n-1; y >x; y--) {
      cout << "  ";
    }
    for (int y = 0; y <= x; y++) {
      cout << "* ";
    }
    cout << endl;
  }

    return 0;
}