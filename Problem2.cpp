#include<iostream>
using namespace std;
main(){
    cout<<"Enter The Speed of Car: ";
    int speed;
    cin>> speed;
    if(speed>100){
        cout<<"Halt....YOU WILL BE CHALLANED!!";
    }
    else if(speed<=100){
        cout<<"Perfect!You are doing good.";
    }
}

