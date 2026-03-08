#include<iostream>
using namespace std;
main(){
    cout<<"Enter The First Number:";
    int First_Number;
    cin>>First_Number;
    cout<<"Enter the operator:";
    string operation;
    cin>> operation;
    cout<<"Enter the second Number:";
    int Second_Number;
    cin>>Second_Number;
    if(operation == "Addition"){
        int result;
        result=First_Number-Second_Number;
        cout<<First_Number<<"- "<<Second_Number<<"="<<result;
    }
    if(operation == "Subtraction"){
        int result;
        result=First_Number+Second_Number;
        cout<<First_Number<<"+ "<<Second_Number<<"="<<result;
    }
    if(operation == "Multiplication"){
        int result;
        result=First_Number/Second_Number;
        cout<<First_Number<<"/" <<Second_Number<<"="<<result;
    }
    if(operation == "Division"){
        int result;
        result = First_Number * Second_Number;
        cout<<First_Number<<"*"<<Second_Number<<"="<<result;
    }
    }
