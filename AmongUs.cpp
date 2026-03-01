#include<iostream>
using namespace std;

main(){

cout<<"Enter the Imposter Count:";
float i;
cin>> i;
cout<<"Enter the Player count:";
float p;
cin>> p;
float Chance;
Chance=100*(i/p);
cout<<"The Chance is:"<<Chance<<"%";
}

