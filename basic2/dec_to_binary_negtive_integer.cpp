#include <iostream>
using namespace std;

// Function to print the binary representation of an integer
void printBinary(int num) {
    // Determine the number of bits in an integer
    int numBits = sizeof(num) * 8;

    // Start from the leftmost bit and print each bit
    for (int i = numBits - 1; i >= 0; i--) {
        // Shift the number to the right by 'i' bits and check the least significant bit
        int bit = (num >> i) & 1;

        // Print the bit
        cout << bit;
    }

    // Print a newline character
    cout << endl;
}

int main() {
    int num ;
    cin>>num;

    cout << "Binary representation of "<<num<<":"<<endl;
    printBinary(num);

    return 0;
}
