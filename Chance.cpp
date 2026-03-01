#include<iostream>
using namespace std;

main(){

cout<<"Enter the number of Imposters";
float Imposters;
cin>> Imposters;
cout<<"Enter the number of Players";
float Players;
cin>> Players;
float Chance;
Chance=100*(Imposters/Players);
cout<<"The Chance is"<<Chance<<"in %";
}