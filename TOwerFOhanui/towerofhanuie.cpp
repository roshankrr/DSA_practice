#include <iostream>

using namespace std;

void tower_of_hanoi(int n, char start, char target, char middle) {
    if (n == 1) {
        cout << "Move disk 1 from " << start << " to " << target << endl;
        return;
    }
    tower_of_hanoi(n - 1, start, middle, target);
    cout << "Move disk " << n << " from " << start << " to " << target << endl;
    tower_of_hanoi(n - 1, middle, target, start);
}

int main() {
    int number_of_disks = 3;
    tower_of_hanoi(number_of_disks, 'A', 'C', 'B');
    return 0;
}
