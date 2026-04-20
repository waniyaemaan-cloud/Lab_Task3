#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string calculatePoolState(int V, int P1, int P2, double H)
{
    double totalWater = (P1 + P2) * H;

    stringstream result;

    // Case 1: Pool NOT overflowing
    if (totalWater <= V)
    {
        double poolPercent = (totalWater / V) * 100;
        double pipe1Percent = (P1 * H / totalWater) * 100;
        double pipe2Percent = (P2 * H / totalWater) * 100;

        // convert to integer (no rounding)
        int pool = (int)poolPercent;
        int p1 = (int)pipe1Percent;
        int p2 = (int)pipe2Percent;

        result << "The pool is " << pool << "% full. "
               << "Pipe 1: " << p1 << "%. "
               << "Pipe 2: " << p2 << "%.";
    }
    // Case 2: Overflow
    else
    {
        double overflow = totalWater - V;

        result << fixed << setprecision(1);
        result << "For " << H << " hours the pool overflows with "
               << overflow << " liters.";
    }

    return result.str();
}

int main()
{
    int V, P1, P2;
    double H;

    cout << "Enter pool volume (V): ";
    cin >> V;

    cout << "Enter pipe 1 flow rate (P1): ";
    cin >> P1;

    cout << "Enter pipe 2 flow rate (P2): ";
    cin >> P2;

    cout << "Enter hours (H): ";
    cin >> H;

    cout << calculatePoolState(V, P1, P2, H) << endl;

    return 0;



































}