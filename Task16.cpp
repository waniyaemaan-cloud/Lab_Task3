#include <iostream>
using namespace std;

int main() {
    int pin, correctPin = 1234;
    int balance = 1000; // starting balance
    int choice, amount;
    bool login = false;

    // 3 attempts for PIN
    for(int i = 1; i <= 3; i++) {
        cout << "Enter ATM PIN: ";
        cin >> pin;

        if(pin == correctPin) {
            cout << "Login Successful\n";
            login = true;
            break;
        } else {
            cout << "Wrong PIN\n";
        }
    }

    // If login successful
    if(login == true) {
        do {
            cout << "\n--- ATM MENU ---\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if(choice == 1) {
                cout << "Balance: " << balance << endl;
            }
            else if(choice == 2) {
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if(amount > 0) {
                    balance = balance + amount;
                    cout << "Deposit Successful\n";
                } else {
                    cout << "Invalid amount\n";
                }
            }
            else if(choice == 3) {
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if(amount > 0 && amount <= balance) {
                    balance = balance - amount;
                    cout << "Withdraw Successful\n";
                } else {
                    cout << "Insufficient Balance\n";
                }
            }
            else if(choice == 4) {
                cout << "Thank you for using ATM\n";
            }
            else {
                cout << "Invalid choice\n";
            }

        } while(choice != 4); // loop until exit
    } 
    else {
        cout << "Too many wrong attempts. Card blocked.\n";
    }

    return 0;
}