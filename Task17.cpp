#include <iostream>
using namespace std;

string convertToText(int num)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five",
                     "Six", "Seven", "Eight", "Nine"};

    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                      "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num >= 1 && num <= 9)
    {
        return ones[num];
    }
    else if (num >= 10 && num <= 19)
    {
        return teens[num - 10];
    }
    else if (num >= 20 && num <= 99)
    {
        int t = num / 10;
        int o = num % 10;

        if (o == 0)
            return tens[t];
        else
            return tens[t] + ones[o];
    }

    return "Invalid";
}

int main()
{
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;

    cout << convertToText(num) << endl;

    return 0;
}