#include <iostream>
#include <string>
using namespace std;

struct Customer {
    int accountNumber;
    string name;
    float balance;
};

// Function to print account number and name of customers with balance below Rs. 100
void printCustomersWithLowBalance(Customer customers[], int numCustomers) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 100) {
            cout << "Account Number: " << customers[i].accountNumber << ", Name: " << customers[i].name << endl;
        }
    }
}

// Function to handle withdrawal or deposit and display appropriate messages
void handleTransaction(Customer customers[], int numCustomers, int acctNumber, float amount, int code) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == acctNumber) {
            if (code == 1) { // Deposit
                customers[i].balance += amount;
                cout << "Deposit successful. New balance: Rs. " << customers[i].balance << endl;
            } else if (code == 0) { // Withdrawal
                if (customers[i].balance >= amount) {
                    customers[i].balance -= amount;
                    cout << "Withdrawal successful. New balance: Rs. " << customers[i].balance << endl;
                } else {
                    cout << "The balance is insufficient for specified withdrawal." << endl;
                }
            }
            return;
        }
    }
    cout << "Account not found." << endl;
}

int main() {
    const int maxCustomers = 20;
    Customer customers[maxCustomers];

    // Initialize customer data (you can input or load data here)
    customers[0] = {101, "Alice", 500};
    customers[1] = {102, "Bob", 75};
    customers[2] = {103, "Charlie", 250};

    int choice;
    do {
        cout << "\nMenu:\n1. Print Customers with Low Balance\n2. Perform Transaction\n3. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                printCustomersWithLowBalance(customers, maxCustomers);
                break;
            case 2:
                int acctNumber, code;
                float amount;
                cout << "Enter Account Number: ";
                cin >> acctNumber;
                cout << "Enter Amount: Rs. ";
                cin >> amount;
                cout << "Enter Code (1 for Deposit, 0 for Withdrawal): ";
                cin >> code;
                handleTransaction(customers, maxCustomers, acctNumber, amount, code);
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}