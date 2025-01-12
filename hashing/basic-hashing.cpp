#include <iostream>
using namespace std;

//Basic of Hashing
//Hashing is a technique that is used to uniquely identify a specific object from a group of similar objects.
//Hashing is used to index and retrieve items in a database because it is faster to find the item using the shorter hashed key than to find it using the original value.
//It is also used in many encryption algorithms.
//example lets have a array [1,2,3,4,5,6,7,2,6,4] and we want to find how many times does 4 appear in the array .
//if we use linear search it will take O(n) time and if want to search for n elements it will take O(n^2) time.
//But if we use hashing we can find the element in O(1) time. How???????
//in this we Simply create a hash table and store the elements in the hash table and then we can find the element in O(1) time.

//Hash Table
//A hash table is a data structure that is used to store keys/value pairs. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.
//for above example we can create a hash table like this in which the index represent the value of the element and the value represent how many times it appears in the array.
//index  0 1 2 3 4 5 6 7
//value  0 1 2 1 2 1 2 1

//lets see the basic function of hashing


int main() {
    int array[10] = {1,2,3,4,5,6,7,2,6,4};
    int size = sizeof(array)/sizeof(array[0]);
    
    //create a hash table
    int hashTable[11] = {0};
    while(size--){
        hashTable[array[size]]++;
    }

    while(true){
        int n;
        cout<<"Enter the number you want to search: ";
        cin>>n;
        if(n == -1){
            break;
        }
        cout<<"The number "<<n<<" appears "<<hashTable[n]<<" times in the array."<<endl;
    }
    
    return 0;
}