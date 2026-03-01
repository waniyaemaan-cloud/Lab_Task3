#include<iostream>
using namespace std;

main(){

cout<<"Enter the Intial Velocity:";
int Vi;
cin>> Vi;
cout<<"Enter the Accleration:";
int a;
cin>> a;
cout<<"Enter Time(s):";
int t;
cin>> t;
int Vf;
Vf=(a*t)+Vi;
cout<<"The Final Velocity is:"<<Vf<<"(m/s)";
}