#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Name of First Brother: ";
    string First_Brother;
    cin>> First_Brother;
    cout<<"Enetr the Age of First Brother: ";
    int Age_First;
    cin>> Age_First;
    cout<<"Enter the Nmae of Second Brother:";
    string Second_Brother;
    cin>> Second_Brother;
    cout<<"Enter the Age of Second_Brother: ";
    int Age_Second;
    cin>> Age_Second;
    cout<<"Enter the Name of Third Brother: ";
    string Third_Brother;
    cin>> Third_Brother;
    cout<<"Enter the Age of Third brother: ";
    int Age_Third;
    cin>> Age_Third;
    if(Age_First>Age_Second){
        if(Age_Third>Age_Second)
        cout<<Second_Brother<<" is youngest";
        }
    
    if(Age_Second>Age_Third){
        if(Age_Third<Age_First)
            cout<<Third_Brother<<" is youngest";
    }

if(Age_Third>Age_First){
    if(Age_Second>Age_First)
        cout<<First_Brother<<" is youngest";
    }
}
    
