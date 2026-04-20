#include <iostream>
using namespace std;

// Function to check Oddish or Evenish
string checkOddishEvenish(int num) {
    int sum = 0;

    // Extract digits and calculate sum
    sum += num % 10;
    num = num / 10;

    sum += num % 10;
    num = num / 10;

    sum += num % 10;
    num = num / 10;

    sum += num % 10;
    num = num / 10;

    sum += num % 10;

    // Check if sum is odd or even
    if (sum % 2 == 0) {
        return "Evenish";
    } else {
        return "Oddish";
    }
}

int main() {
    int number;

    cout << "Enter a 5-digit number: ";
    cin >> number;

    cout << "Result: " << checkOddishEvenish(number) << endl;

    return 0;
}