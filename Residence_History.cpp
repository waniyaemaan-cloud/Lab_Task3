#include<iostream>
using namespace std;

main(){

cout<<"Enter the Persons Current Age:";
int Age;
cin>> Age;
cout<<"Enter the number of moves:";
int Moves;
cin>> Moves;
int Residence_History;
Residence_History=(Age/Moves)+1;
cout<<"Average Number of Years lived in the same House:"<<Residence_History;
}