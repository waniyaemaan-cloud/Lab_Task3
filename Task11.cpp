#include<iostream>
using namespace std;
main(){
 cout<<"Enter the Bill Amount:";
 int Bill;
 cin>> Bill;
 if(Bill<=5000){
    int Discount;
    Discount=Bill*0.05;
    int Discounted_Price;
 Discounted_Price=Bill - Discount;
    cout<<"Your Disconted bill is"<<Discounted_Price;

 }
if(Bill>5000){
    int Discount;
    Discount=Bill*0.10;
int Discounted_Price;
 Discounted_Price=Bill - Discount;
    cout<<"Your Disconted bill is"<<Discounted_Price;
  

}

 }