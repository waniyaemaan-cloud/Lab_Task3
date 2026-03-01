#include<iostream>
using namespace std;

main(){

cout<<"Enter the current world population:";
int currentPopulation;
cin>>currentPopulation;
cout<<"Enter the monthly birth rate (number of births per month):";
int monthly_BirthRate;
cin>> monthly_BirthRate;
int Population_in_threeDecades;
Population_in_threeDecades=currentPopulation+(monthly_BirthRate*360);
cout<<"The Population in three decades will be"<<Population_in_threeDecades;
}