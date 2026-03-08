#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Temperature of City 1: ";
    float T1;
    cin>> T1;
    cout<<"Enter the Temperatur of City 2: ";
    float T2;
    cin>> T2;
    float Difference;
    Difference=T1-T2;
    if(Difference>10){
        cout<<"Difference i too big.";
    }
    if(Difference<=10){
        cout<<"Program ends.";
    }
    }


