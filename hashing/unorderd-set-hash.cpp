#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "hello Worlddddd";

//we use unorderd_map instead of map because it is faster than map
//unordered_map is has average and best TC of O(1) and worst TC of O(n)

//while map is has the average best and worst TC of O(logn)
//for long term large data unorderd_map is better than map because worst case comes less in unorderd_map

    //hash table
    unordered_map<char,int> hashTable;
    for (int i =0 ;i<s.length();i++){
        hashTable[s[i]]++;
    }

    
        char n;
        cout<<"Enter the character you want to search: ";
        cin>>n;
        cout<<"The character "<<n<<" appears "<<hashTable[n]<<" times in the string."<<endl;
    return 0;
}