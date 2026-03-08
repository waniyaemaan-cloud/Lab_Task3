#include<iostream>
using namespace std;
main(){
    cout<<"Please Enter your Name:";
    string Name;
    cin>> Name;
    if(Name== "Ali" ){
        cout<<"Welcome" <<Name;
    }
    if(Name != "Ali"){
     cout<<"Try Again";
    }
}
