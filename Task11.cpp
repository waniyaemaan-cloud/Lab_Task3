#include <iostream>
using namespace std;

// Function to check symmetry of a 3-digit number
bool isSymmetrical(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return (original == reverse);
}

int main() {
    int number;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    if (isSymmetrical(number)) {
        cout << "True: The number is symmetrical." << endl;
    } else {
        cout << "False: The number is not symmetrical." << endl;
    }

    return 0;
    
}