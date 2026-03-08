#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Country name: ";
    string Country;
    cin>> Country;
    cout<<"Enter the Ticket Price: ";
    int Ticket_Price;
    cin>>Ticket_Price;
    int Discounted_Price;
     if(Country=="Ireland"){
        int Discount;
        Discount= Ticket_Price*0.10;
        int Discounted_Price;
        Discounted_Price= Ticket_Price-Discount;
        cout<<"Discounted_Price: "<<Discounted_Price;
}
    
    else{
        int Discount;
        Discount= Ticket_Price*0.05;
        int Discounted_Price;
        Discounted_Price= Ticket_Price-Discount;
        cout<<"Discounted_Price: "<<Discounted_Price;
}
    }

