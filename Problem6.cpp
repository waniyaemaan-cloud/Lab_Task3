#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Speed:";
    int Speed;
    cin>> Speed;
    if(Speed<=10){
        cout<<"Slow";
    }
  else if(Speed<=50){
        cout<<"Average";
  }
  else if(Speed<=150){
     cout<<"Fast";
  }
   else if(Speed<=1000){
        cout<<"Ultra Fast";
   }
    else{
        cout<<"Extremely Fast";
    }
}



    
