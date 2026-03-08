#include<iostream>
using namespace std;
main(){
   int Laptop_Price=50000;
   int Monthly_Salary;
    int advance;
    advance=10000*50/100;
    int Advance_Salary;
    Advance_Salary=advance*6;
 
  if(Advance_Salary>=Laptop_Price){
     cout<<"You can buy Laptop";
    }
 else{ 
    int Advance_Salary;
    int Months_Required=Laptop_Price/advance;
    cout<<"Months Required to buy Laptop: "<<Months_Required;
 }
}


