#include <iostream>
using namespace std;

// Function that multiplies number by 5
int multiplyByFive(int num) {
    
   int total= num * 5;
   return total;
}

int main() {
    int number, result;

    cout << "Enter a number: ";
    cin >> number;

    result = multiplyByFive(number);

    cout << "After multiplying by 5: " << result << endl;

    return 0;
}