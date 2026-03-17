#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;

    while(number > 0) {
        int digit = number % 10; // get last digit
        sum += digit;            // add it to sum
        number = number / 10;    // remove last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}