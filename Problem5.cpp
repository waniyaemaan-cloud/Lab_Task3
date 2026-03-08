#include<iostream>
using namespace std;
main(){
cout<<"Enter the Number of Holidays: ";
int Holidays;
cin>> Holidays;
int Working_Days;
Working_Days=365-Holidays;
int Time_For_Games;
Time_For_Games=(Working_Days*63)+(Holidays*127);
int Difference;
Difference=30000-Time_For_Games;
if(Time_For_Games>30000){
    float hours;
    hours=Difference/60;
    float minutes;
    cin>> minutes;
    minutes=Difference%60;
    cout<<"Tom will run away"<<endl;
    cout<<Difference/60<<"Hours and"<<minutes<<" Minutes more for play";
}
    else{
         float hours;
    hours=Difference/60;
    float minutes;
    cin>> minutes;
    minutes=Difference%60;
        cout<<"Tom sleeps well"<<endl;
        cout<<hours<<"Hours and"<<minutes<<"Minutes less for play";
    }

}
