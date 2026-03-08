#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Password:";
    string user_Password;
    cin>> user_Password;
    string Password;
    Password="Pass@123!";
    if(user_Password==Password){
        cout<<"You have cracked the code!";
    }
else{
    cout<<"Its not that easy,Try Again!";
}
    
}