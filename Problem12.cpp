#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        // Display menu
        cout << "\n--- Restaurant Management System ---\n";
        cout << "1. View Food Menu\n";
        cout << "2. Place Order\n";
        cout << "3. View Order Status\n";
        cout << "4. Generate Bill\n";
        cout << "5. Contact Staff\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Respond to user choice
        switch(choice) {
            case 1:
                cout << "You selected: View Food Menu.\n";
                break;
            case 2:
                cout << "You selected: Place Order.\n";
                break;
            case 3:
                cout << "You selected: View Order Status.\n";
                break;
            case 4:
                cout << "You selected: Generate Bill.\n";
                break;
            case 5:
                cout << "You selected: Contact Staff.\n";
                break;
            case 6:
                cout << "Exiting Restaurant Management System. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 6); // Repeat until user chooses to exit

    return 0;
}