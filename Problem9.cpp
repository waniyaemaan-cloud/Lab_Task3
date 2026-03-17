#include <iostream>
using namespace std;

int main() {
    int money, year;

    // Ask user for input
    cout << "Enter inherited money: ";
    cin >> money;

    cout << "Enter the year until which he has to live: ";
    cin >> year;

    int age = 18;
    int spent = 0;

    for(int y = 1800; y <= year; y++) {
        if(y % 2 == 0) {
            spent += 12000;           // even year
        } else {
            spent += 12000 + 50 * age; // odd year
        }
        age++; // increase age every year
    }

    if(money >= spent) {
        cout << "Yes! He will live a carefree life and will have " << money - spent << " dollars left.";
    } else {
        cout << "He will need " << spent - money << " dollars to survive.";
    }

    return 0;
}