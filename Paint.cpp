#include<iostream>
using namespace std;

main(){

cout<<"Enter the paint area:";
int n;
cin>> n;
cout<<"Enter the width:";
int width;
cin>> width;
cout<<"Enter the height:";
int height;
cin>> height;
int WallsPainted;
WallsPainted=n/(width*height);
cout<<"WallsPainted="<<WallsPainted;
}