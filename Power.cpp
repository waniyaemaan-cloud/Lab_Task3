#include<iostream>
using namespace std;

main(){

cout<<"Enter the Voltage (in Volts):";
float Voltage;
cin>>Voltage;
cout<<"Enter the Current (in Amperes):";
float Current;
cin>>Current;
float Power;
Power=Voltage*Current;
cout<<"The Power is"<<Power<<"in Watts";
}
