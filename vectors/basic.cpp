#include <iostream>
#include <vector> // Include the vector header file
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(4);
    v.push_back(3);
    auto it=v.cend()-1;
    cout<<*it<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    return 0;
}