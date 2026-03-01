#include<iostream>
using namespace std;

main(){

cout<<"Enter the number of Minutes:";
int minutes;
cin>> minutes;
cout<<"Enter the frames per second:";
int fps;
cin>> fps;
int Frames;
Frames=minutes*fps*60;
cout<<"The Total Number of Frames:"<<Frames;
}