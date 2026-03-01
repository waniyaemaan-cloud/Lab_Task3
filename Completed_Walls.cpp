#include<iostream>
using namespace std;

main(){
cout<<"Enter the Number of Square meters you can paint (in metres):";
int n;
cin>> n;
cout<<"Enter the width of single wall (in metres):";
int w;
cin>> w;
cout<<"Enter the Height of single walls:";
int h;
cin>> h;
int Completed_Walls;
Completed_Walls=n/(w*h);
cout<<"Number of Walls you can Paint:"<<Completed_Walls;
}
