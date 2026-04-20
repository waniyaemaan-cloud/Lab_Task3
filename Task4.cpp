#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number1,number2;
    cout<<"Enter Number1:";
    cin>>number1;
    cout<<"Enter Number2:";
    cin>>number2;
    cout<<"Smaller Number:"<<min(number1,number2);
    return 0;
}