#include <iostream>
#include <cmath>   // for tan()

using namespace std;

// User-defined function to calculate height
double calculateHeight(double distance, double angleDegrees)
{
    // Convert degrees to radians
    double angleRadians = angleDegrees / 57.2958;

    // Apply formula
    double height = distance * tan(angleRadians);

    return height;
}

int main()
{
    double distance, angle;

    // Taking input
    cout << "Enter horizontal distance (in feet): ";
    cin >> distance;

    cout << "Enter angle of elevation (in degrees): ";
    cin >> angle;

    // Function call
    double height = calculateHeight(distance, angle);

    // Display result
    cout << "Height of the tree = " << height << " feet" << endl;

    return 0;
}