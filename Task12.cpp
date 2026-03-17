#include<iostream>
using namespace std;
main(){
int findGCD(int a, int b)
{
    int gcd = 1;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
}

int findLCM(int a, int b)
{
    int lcm;

    for (int i = 1; ; i++)
    {
        lcm = a * i;

        if (lcm % b == 0)
        {
            return lcm;
        }
    }
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD = " << findGCD(num1, num2) << endl;
    cout << "LCM = " << findLCM(num1, num2) << endl;

}
}