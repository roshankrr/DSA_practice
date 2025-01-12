#include <iostream>
using namespace std;


//String Hashing
// in this we have a different way of hashing the string because in this we know the string has a ascii value as a--97,b--98,c--99 and so on.
// so we can use the ascii value of the string to hash the string.
// lets see the example
// lets say we have a string "hello" and we want to hash it.
// so we can hash it like this
// h--104,e--101,l--108,l--108,o--111
//but we need to minus the ascii value of the first character from the rest of the characters.
//so the hash value will be 0,3,4,4,7
int main() {
    string s = "hello Worlddddd";

    //hash table
    int hashTable[27] = {0};
    for (int i =0 ;i<s.length();i++){
        hashTable[s[i]-'a']++;
        // cout<<hashTable[s[i]-'a']<<endl;
    }

    
        char n;
        cout<<"Enter the character you want to search: ";
        cin>>n;
        cout<<"The character "<<n<<" appears "<<hashTable[n-'a']<<" times in the string."<<endl;


    return 0;
}