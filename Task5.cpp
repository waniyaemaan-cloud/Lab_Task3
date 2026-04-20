#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int base_number;
    int exponent;
    cout<<"Enter the base number:";
    cin>>base_number;
    cout<<"Enter the Exponent:";
    cin>>exponent;
cout<<base_number<<"raised to power"<<exponent<<" is:"<<pow(base_number,exponent);
return 0;

}