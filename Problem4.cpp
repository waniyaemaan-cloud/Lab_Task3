#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Number of Red Roses: ";
    int Red_Roses;
    cin>> Red_Roses;
    cout<<"Enter the Number of White Roses: ";
    int White_Roses;
    cin>> White_Roses;
    cout<<"Enter the Number of Tulips: ";
    int Tulips;
    cin>> Tulips;
    float Total_Price;
    Total_Price=Red_Roses*2.00+White_Roses*4.10+Tulips*2.50;
    if(Total_Price>200){
        float Discount;
        Discount=Total_Price*0.20;
    
    float After_Discount;
    After_Discount=Total_Price-Discount;
    cout<<"Original Price:"<<Total_Price<<endl;
    cout<<"Discounted Price: "<<After_Discount;
}
}