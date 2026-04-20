#include <iostream>
using namespace std;

// Function to check whether input is 'A' or 'a'
string checkAlphabetCase(char ch) {
    if (ch == 'A') {
        return "You have entered Capital A";
    }
    else {
        return "You have entered small A";
    }
}

int main() {
    char input;

    cout << "Enter A or a: ";
    cin >> input;

    string result = checkAlphabetCase(input);

    cout << result << endl;

    return 0;
    
}