#include <iostream>
#include <cmath>   // for sqrt()
using namespace std;

int main() {
    double a, b, c;
    double root1, root2, realPart, imaginaryPart;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    // Check if it's really a quadratic equation
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
        return 0;
    }

    // Case 1: Two real and distinct roots
    if ((b * b - 4 * a * c) > 0) {
        root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

        cout << "Two real and distinct roots:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    // Case 2: One real repeated root
    else if ((b * b - 4 * a * c) == 0) {
        root1 = -b / (2 * a);

        cout << "One real repeated root:" << endl;
        cout << "Root = " << root1 << endl;
    }

    // Case 3: Complex roots
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-(b * b - 4 * a * c)) / (2 * a);

        cout << "No real roots (complex roots):" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}