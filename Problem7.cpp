#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Type of Figure:";
    string Shape;
    cin>> Shape;
    if(Shape=="Square"){
        cout<<"Enter the Length of its Side: ";
        float Length;
        cin>> Length;
        float Area;
        Area=Length*Length;
        cout<<Area;
    }
    if(Shape=="Rectangle"){
        cout<<"Enter the width: ";
        float width;
        cin>> width;
        cout<<"Enter the Length: ";
       float Length;
        cin>> Length;
        float Area;
        Area=Length*width;
        cout<<Area;
    } 
    if(Shape=="Circle"){
        cout<<"Enter the Radius: ";
        float Radius;
        cin>> Radius;
        float Area;
        Area=(Radius*Radius)*3.14;
        cout<<Area;
    }
    if(Shape=="Triangle"){
        cout<<"Enter the Base: ";
        float Base;
        cin>> Base;
        cout<<"Enter the Height: ";
        float Height;
        cin>> Height;
        float Area;
        Area=(Base*Height)*1/2;
        cout<<Area;
    }
}